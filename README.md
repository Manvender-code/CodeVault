
# CodeVault
CodeVault is a lightweight version control system inspired by Git, written in **C++**.  
It provides basic repository management features such as initialization, staging, committing, branching, logging, merging, and diff checking — all from the command line.  
This project was built to understand the inner workings of version control while keeping the design simple and educational.

---

## Features
- **Repository Initialization**: Create a new `.CodeVault` directory to start tracking files.  
- **Staging & Committing**: Add files to the staging area and commit them with unique hashes.  
- **Logging**: View commit history with timestamps and messages.  
- **Branching & Checkout**: Create new branches and switch between them.  
- **Merging**: Merge branches with basic conflict detection.  
- **Diff**: Compare two commits to see added, modified, or removed files.  

---

## Example Usage
```bash
./mygit init
./mygit add file.txt
./mygit commit -m "Initial commit"
./mygit log
./mygit branch feature-x
./mygit checkout feature-x
./mygit merge main
./mygit diff <commit1> <commit2>
