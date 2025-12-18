🔐 Interactive Adaptive Login Security System (C)

A lightweight, interactive file-based login system written in C.
Designed to demonstrate real-world defensive security concepts, including:

Login attempt persistence across program restarts

Cooldown-based brute-force mitigation

Behavioral logging of user password guesses

This system is educational and shows how login systems retain memory and slow attackers.

🧠 Key Features
🖊️ Interactive Password Input

Users type the password at runtime when prompted

Input is read securely using fgets()

Newline characters are stripped automatically

🔁 Persistent State

Failed attempts and the timestamp of the last attempt are stored in state.txt

Attempts persist even if the program restarts

⏳ Cooldown Enforcement

After MAX_ATTEMPTS failed attempts, login is blocked temporarily

Cooldown duration is defined in COOLDOWN_SECONDS

Attempts reset automatically after cooldown expires

📝 Attempt Logging

Every incorrect password is logged to attempts.log

Logs include timestamps and the exact input the user tried

♻️ Safe Reset

Correct password resets attempts and cooldown, giving a fresh start

⚙️ Configuration

Inside login.c:

#define MAX_ATTEMPTS 3
#define COOLDOWN_SECONDS 180
#define MAX_PASS_LEN 64


MAX_ATTEMPTS: Number of allowed incorrect guesses before cooldown

COOLDOWN_SECONDS: Cooldown duration in seconds

MAX_PASS_LEN: Maximum length of user input

🛠️ Build & Run

Navigate to the folder:

cd C-Projects/login-security-system


Compile:

gcc login.c -o login


Run:

./login


You will see:

Enter password: 


Type a password and press Enter

The program will respond with success or failure and track attempts

📊 Example Behavior

Run sequence:

Enter password: admin123
Wrong password. Attempt 1/3
Enter password: peanuts
Wrong password. Attempt 2/3
Enter password: robots324
Wrong password. Attempt 3/3
Cooldown active. Try again later.
Enter password: humans4321
Login Successful. Welcome


attempts.log example:

[Wed Dec 18 09:41:02 2025] admin123
[Wed Dec 18 09:41:20 2025] peanuts
[Wed Dec 18 09:42:01 2025] robots324


state.txt example after cooldown:

3 1710744123

⚠️ Security Notice

This project logs raw password input for educational purposes only

Do not use this design in production

Real systems must:

Never store plaintext passwords

Hash sensitive data

Follow legal and ethical guidelines

🎯 Learning Outcomes

Understanding persistence in security systems

How cooldowns can slow brute-force attacks

How logging reveals attacker behavior

How design decisions affect system security

🧪 Ideas for Extension

Hide input using terminal password masking

Exponential cooldowns

Password entropy analysis

Hash-based logging

Multi-user support

Attack pattern visualization

🧠 Philosophy

Observing user behavior, remembering past failures, and enforcing cooldowns are simple yet powerful strategies.

This program is a sandbox to learn and experiment, not a production-ready login system.
