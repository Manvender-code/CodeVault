#ifndef UTILS_H
#define UTILS_H

#include <string>

// Hashing function
std::string Hash(const std::string &content);

// Time function
std::string getCurrentTime();

// Global paths
<<<<<<< HEAD
extern const std::string Code_Vault;
extern const std::string Objects;
extern const std::string Commits;
extern const std::string Head_File;
extern const std::string Index_File;
extern const std::string Branch_File;
=======
extern const std::string MINI_GIT_DIR;
extern const std::string OBJECTS_DIR;
extern const std::string COMMITS_DIR;
extern const std::string HEAD_FILE;
extern const std::string INDEX_FILE;
extern const std::string BRANCHES_FILE;
>>>>>>> 4d7a456ab10636be5fc14449d2fb2c4c38270d76

#endif // UTILS_H
