
Features:

    Repository Initialization: Create a new .minigit repository.

    Staging: Add file contents to the staging area (index).

    Committing: Record snapshots of the staged files.

    Logging: View the history of commits for the current branch.

    Branching: Create new branches to work on different features.

    Checkout: Switch between different branches or commits.

    Merging: Merge changes from one branch into another.

    Diff: See differences in files between two commits.



Compilation

    Clone or download the repository: Make sure you have all the project files (Makefile, src/, include/).

    Navigate to the root directory: Open your terminal and cd into the minigit directory where the Makefile is located.

    cd path/to/your/minigit

    Compile the project: Run the make command. This will compile the source files and create an executable in the bin/ directory.

    make

A Practical Workflow: How to Use MiniGit

This section provides a complete, step-by-step guide on how to use the basic features of MiniGit in a typical development workflow.
1. Initialize Your Repository

First, create a new directory for your project and initialize MiniGit inside it.

mkdir my-project
cd my-project
../minigit/bin/minigit init 
# Note: Adjust the path to the executable if needed

This creates the hidden .minigit directory, which will store all the version control data.
2. Create and Stage a File

Create a new file and add some content to it. Then, use the add command to stage it.

echo "Hello, World!" > main.txt
../bin/minigit add main.txt

3. Make Your First Commit

Commit the staged file to the repository's history with a descriptive message.

../bin/minigit commit -m "Initial commit: Add main.txt"

4. Check the Log

You can view the history of your commits using the log command.

../bin/minigit log

You should see your first commit, along with its hash, timestamp, and message.
5. Create a New Branch

Let's create a new branch called feature to work on a new addition without affecting the main branch.

../bin/minigit branch feature

6. Switch to the New Branch

Use checkout to start working on the feature branch.

../bin/minigit checkout feature

7. Make and Commit Changes

Now, let's modify main.txt and create a new file.

echo "A new feature line." >> main.txt
echo "Feature details" > feature.txt
../bin/minigit add main.txt
../bin/minigit add feature.txt
../bin/minigit commit -m "Implement new feature and update main"

8. Merge the Feature Back to Main

Once your feature is complete, switch back to the main branch and merge the feature branch into it.

../bin/minigit checkout main
../bin/minigit merge feature

This will create a new "merge commit" in the main branch, combining the histories of both branches.
9. View the Final History

Check the log again on the main branch. You will now see all the commits, including the initial commit, the feature commit, and the merge commit.

../bin/minigit log

10. Compare Commits (Diff)

If you want to see what changed between two commits, you can use the diff command. First, grab two commit hashes from the log output, then run:

../bin/minigit diff <hash_of_commit_1> <hash_of_commit_2>

This will show you which files were added, removed, or modified between the two snapshots.
Available Commands

Here is a quick reference for all available commands:

Command
	

Description

./bin/minigit init
	

Initializes a new MiniGit repository.

./bin/minigit add <file>
	

Stages a file for the next commit.

./bin/minigit commit -m "message"
	

Commits the staged files with a message.

./bin/minigit log
	

Shows the commit history for the current branch.

./bin/minigit branch <branch_name>
	

Creates a new branch.

./bin/minigit checkout <branch_name/commit_hash>
	

Switches to a different branch or commit.

./bin/minigit merge <branch_name>
	

Merges the specified branch into the current one.

./bin/minigit diff <commit1> <commit2>
	

Shows the difference between two commits.
Cleaning the Build

To remove all compiled files (the obj/ and bin/ directories), you can run the clean command from the minigit root directory:

make clean

