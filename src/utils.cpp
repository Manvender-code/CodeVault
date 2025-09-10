#include "../include/utils.h"
#include <vector>
#include <ctime>
#include <functional>
<<<<<<< HEAD
using namespace std;

const string Code_Vault = ".mygit";
const string Objects = Code_Vault + "/objects";
const string Commits = Code_Vault + "/commits";
const string Head_File = Code_Vault + "/HEAD.txt";
const string Index_File = Code_Vault + "/index.txt";
const string Branch_File = Code_Vault + "/branches.txt";
=======

// Global path definitions
const std::string MINI_GIT_DIR = ".minigit";
const std::string OBJECTS_DIR = MINI_GIT_DIR + "/objects";
const std::string COMMITS_DIR = MINI_GIT_DIR + "/commits";
const std::string HEAD_FILE = MINI_GIT_DIR + "/HEAD.txt";
const std::string INDEX_FILE = MINI_GIT_DIR + "/index.txt";
const std::string BRANCHES_FILE = MINI_GIT_DIR + "/branches.txt";
>>>>>>> 4d7a456ab10636be5fc14449d2fb2c4c38270d76

std::string Hash(const std::string &content)
{
    std::hash<std::string> hasher;
    return std::to_string(hasher(content));
}

std::string getCurrentTime()
{
    time_t now = time(0);
    char buf[sizeof "YYYY-MM-DD HH:MM:SS"] = {0};
    strftime(buf, sizeof buf, "%Y-%m-%d %H:%M:%S", localtime(&now));
    return std::string(buf);
}
