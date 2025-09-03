#ifndef UTILS_H
#define UTILS_H

#include <string>

// Hashing function
std::string Hash(const std::string &content);

// Time function
std::string getCurrentTime();

// Global paths
extern const std::string MINI_GIT_DIR;
extern const std::string OBJECTS_DIR;
extern const std::string COMMITS_DIR;
extern const std::string HEAD_FILE;
extern const std::string INDEX_FILE;
extern const std::string BRANCHES_FILE;

#endif // UTILS_H
