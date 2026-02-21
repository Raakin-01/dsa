==**initialize:**==
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project`
`$ git init`
`Initialized empty Git repository in C:/Users/hp/project/.git/`

==**to see git files:**==
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ ls .git`
`HEAD  config  description  hooks/  info/  objects/  refs/`

==**create a file in the git:**==
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ touch names.txt`

==**see the status of git:**==
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`

`No commits yet`

`Untracked files:`
  `(use "git add <file>..." to include in what will be committed)`
        `names.txt`

`nothing added to commit but untracked files present (use "git add" to track)`

==**to add the git file in the repo and and see the status:**==
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git add names.txt`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`

`No commits yet`

`Changes to be committed:`
  `(use "git rm --cached <file>..." to unstage)`
        `new file:   names.txt`


**==To add new info in a file and check status:==**
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ vim names.txt`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`

`No commits yet`

`Changes to be committed:`
  `(use "git rm --cached <file>..." to unstage)`
        `new file:   names.txt`

`Changes not staged for commit:`
  `(use "git add <file>..." to update what will be committed)`
  `(use "git restore <file>..." to discard changes in working directory)`
        `modified:   names.txt`


`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git add.`
`git: 'add.' is not a git command. See 'git --help'.`

`The most similar command is`
        `add`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git add`
`Nothing specified, nothing added.`
`hint: Maybe you wanted to say 'git add .'?`
`hint: Disable this message with "git config set advice.addEmptyPathspec false"`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git add .`
`warning: in the working copy of 'names.txt', LF will be replaced by CRLF the next time Git touches it`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`

`No commits yet`

`Changes to be committed:`
  `(use "git rm --cached <file>..." to unstage)`
        `new file:   names.txt`

==**To unstage a file**==
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git reset names.txt`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`

`No commits yet`

`Untracked files:`
  `(use "git add <file>..." to include in what will be committed)`
        `names.txt`

`nothing added to commit but untracked files present (use "git add" to track)`

==**To view all the commits made in the git:**==
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git log`
`commit 60e2d02318f0ecd07c5c891cdffbe2ef02990c05 (HEAD -> master)`
`Author: Raakin-01 <shaikraakin@gmail.com>`
`Date:   Fri Jan 9 23:41:44 2026 +0530`

    `names.txt modified`


==**To delete a file and then see its status:**==
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ rm names.txt`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`
`Changes not staged for commit:`
  `(use "git add/rm <file>..." to update what will be committed)`
  `(use "git restore <file>..." to discard changes in working directory)`
        `deleted:    names.txt`

`no changes added to commit (use "git add" and/or "git commit -a")`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git add .`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git commit -m "names.txt deleted"`
`[master f66caa8] names.txt deleted`
 `1 file changed, 2 deletions(-)`
 `delete mode 100644 names.txt`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`
`nothing to commit, working tree clean`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git log`
`commit f66caa8fbbf125d980bf9152093a021a948e6b11 (HEAD -> master)`
`Author: Raakin-01 <shaikraakin@gmail.com>`
`Date:   Fri Jan 9 23:46:33 2026 +0530`

    `names.txt deleted`

`commit 60e2d02318f0ecd07c5c891cdffbe2ef02990c05`
`Author: Raakin-01 <shaikraakin@gmail.com>`
`Date:   Fri Jan 9 23:41:44 2026 +0530`

    `names.txt modified`

**==To delete new commits do this:==**
`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git log`
`commit f66caa8fbbf125d980bf9152093a021a948e6b11 (HEAD -> master)`
`Author: Raakin-01 <shaikraakin@gmail.com>`
`Date:   Fri Jan 9 23:46:33 2026 +0530`

    `names.txt deleted`

`commit 60e2d02318f0ecd07c5c891cdffbe2ef02990c05`  **==here we choose this one cause this is the commit before the last one==** 
`Author: Raakin-01 <shaikraakin@gmail.com>`
`Date:   Fri Jan 9 23:41:44 2026 +0530`

    `names.txt modified`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git reset 660e2d02318f0ecd07c5c891cdffbe2ef02990c05`
`Unstaged changes after reset:`
`D       names.txt`


**==stash command:==**
-> in this we have a files but we will stage and commit them but later for now it should be like the most recent commit .... so the old files are shown but when stash is popped then the new files         are shown and then they are staged then committed.

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ touch surnames.txt`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git add .`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`
`Changes to be committed:`
  `(use "git restore --staged <file>..." to unstage)`
        `deleted:    names.txt`
        `new file:   surnames.txt`


`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git log`
`commit 60e2d02318f0ecd07c5c891cdffbe2ef02990c05 (HEAD -> master)`
`Author: Raakin-01 <shaikraakin@gmail.com>`
`Date:   Fri Jan 9 23:41:44 2026 +0530`

    `names.txt modified`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git status`
`On branch master`
`Changes to be committed:`
  `(use "git restore --staged <file>..." to unstage)`
        `deleted:    names.txt`
        `new file:   surnames.txt`


`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git stash`
`Saved working directory and index state WIP on master: 60e2d02 names.txt modified`

`hp@DESKTOP-0FFMSPJ MINGW64 ~/project (master)`
`$ git stash pop`
`On branch master`
`Changes to be committed:`
  `(use "git restore --staged <file>..." to unstage)`
        `new file:   surnames.txt`

`Changes not staged for commit:`
  `(use "git add/rm <file>..." to update what will be committed)`
  `(use "git restore <file>..." to discard changes in working directory)`
        `deleted:    names.txt`

`Dropped refs/stash@{0} (4c703776fe4eaa4c944c851dd57c278baed44c6d)`

