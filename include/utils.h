#ifndef UTILS_H
#define UTILS_H

#include <string>

// Hashing function
std::string Hash(const std::string &content);

// Time function
std::string getCurrentTime();

// Global paths
extern const std::string Code_Vault;
extern const std::string Objects;
extern const std::string Commits;
extern const std::string Head_File;
extern const std::string Index_File;
extern const std::string Branch_File;

#endif // UTILS_H
