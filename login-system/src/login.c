#include<stdio.h>
#include<time.h>
#include<string.h>
#define MAX_ATTEMPTS 3
#define COOLDOWN_SECONDS 180
#define STATE_FILE "state.txt"
#define LOG_FILE "attempts.log"
#define MAX_PASS_LEN 64
const char correct_password[]="humans4321";
void read_state(int *attempts, time_t *last_time) {
FILE *fp=fopen(STATE_FILE, "r");
if (fp==NULL){
*attempts=0;
*last_time=0;
return;}
fscanf(fp, "%d %ld",attempts, last_time);
fclose(fp);}
void write_state(int attempts, time_t last_time) {
FILE *fp = fopen(STATE_FILE, "w");
if (fp!=NULL){
fprintf(fp, "%d %ld",attempts, last_time);
fclose(fp);
}}
void log_attempt(const char *password) {
FILE *fp = fopen(LOG_FILE, "a");
if (fp != NULL) {
time_t now = time(NULL);
char *t = ctime(&now);
t[strlen(t) - 1] = '\0';  
fprintf(fp, "[%s] %s\n", t, password);
fclose(fp);}}
void login(void) {
char password[MAX_PASS_LEN];
int attempts;
time_t last_attempt;
time_t now=time(NULL);
read_state(&attempts, &last_attempt);
if (attempts>=MAX_ATTEMPTS){
if (difftime(now,last_attempt)<COOLDOWN_SECONDS){
printf("Cooldown active. Try again later.\n");
return;}
else {
attempts=0;
}}
printf("Enter password: ");
if (fgets(password, sizeof(password), stdin) == NULL) {
return;
}
password[strcspn(password, "\n")] = '\0';
if (strcmp(password,correct_password)==0){
printf("Login Successful. Welcome\n");
write_state(0,0);}
else {
attempts++;
write_state(attempts,now);
log_attempt(password);
printf("Wrong password. Attempt %d/%d\n",attempts,MAX_ATTEMPTS);
}}
int main (void){
login();
return 0;
}	
