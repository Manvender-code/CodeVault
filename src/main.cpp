#include <iostream>
#include <string>
#include "../include/git_commands.h"
#include <bits/stdc++.h>
using namespace std;

void print_usage()
{
    cout << "If mygit is not added to system add that using: " << endl;
    // cout << "But if mygit is added to system path you can remove the ./ before mygit to use it."<< endl;
    cout << endl;
    cout << "1. ./mygit init" << endl;
    cout << "2. ./mygit add <file>" << endl;
    cout << "3. ./mygit commit -m 'commit message goes here'" << endl;
    cout << "4. ./mygit log" << endl;
    cout << "5. ./mygit branch branch_name" << endl;
    cout << "6. ./mygit checkout branch_name" << endl;
    cout << "7. ./mygit merge branch_name  (But don't forget to checkout to the specific branch first.)" << endl;
    cout << "8. ./mygit diff <commit1> <commit2>  (You can get the commit hash of two files using log.)" << endl;
    cout << endl;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        print_usage();
        return 1;
    }

    string command = argv[1];
    if (command == "init")
    {
        init();
    }
    else if (command == "add" && argc >= 3)
    {
        add(argv[2]);
    }
    else if (command == "commit" && argc >= 4 && string(argv[2]) == "-m")
    {
        commit(argv[3]);
    }
    else if (command == "log")
    {
        log();
    }
    else if (command == "branch" && argc >= 3)
    {
        createBranch(argv[2]);
    }
    else if (command == "checkout" && argc >= 3)
    {
        checkout(argv[2]);
    }
    else if (command == "merge" && argc >= 3)
    {
        merge(argv[2]);
    }
    else if (command == "diff" && argc >= 4)
    {
        diff(argv[2], argv[3]);
    }
    else
    {
        cout << "Unknown or incomplete command." << endl;
        print_usage();
    }

    return 0;
}
