#ifndef PASSWORD_RECOVERY_H
#define PASSWORD_RECOVERY_H
#include <string>

void accountRecovery(const std::string& username);
std::string generateRecoveryCode(); // Function to generate recovery code
bool sendRecoveryEmail(const std::string& email, const std::string& recoveryCode); // Declaration for sending email

#endif
