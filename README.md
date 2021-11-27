# Welcome to Holberton Simple Shell

## ABOUT:
The simple shell is a command line interpreter that was first conceived by Ken Thompson in 1971. Users can direct the operation of the computer by entering commands as text for a command line interpreter to execute, or by creating text scripts of one or more such commands. This shell includes basic functionality found in the traditional Unix shell.

## VERSION
This simple shell was complied and tested on Ubuntu 20.04 LTS

## TO RUN:
Clone this repo:
```git clone "https://github.com/TimSimms84/simple_shell.git"```

Compile:
```gcc -Wall -Werror -Wextra -pedantic *.c -o hsh```

This shell can be run in interactive mode:
```./hsh```

Or non-interactive mode: 
```echo ls -l | ./hsh```

## EXAMPLE
```$ ./hsh```

```$ ls -la```

```
total 464
-rw-rw-r-- 1 tim tim   155 Nov 26 15:23 AUTHORS
-rw-rw-r-- 1 tim tim  3467 Nov 27 12:49 README.md
-rw-rw-r-- 1 tim tim   487 Nov 26 15:23 _environ.c
-rw-rw-r-- 1 tim tim   876 Nov 26 15:23 _strtok.c
-rw-rw-r-- 1 tim tim   731 Nov 27 12:44 builtin_func.c
-rw-rw-r-- 1 tim tim   477 Nov 26 15:23 check_builtin.c
-rw-rw-r-- 1 tim tim   559 Nov 26 15:23 check_path.c
-rw-rw-r-- 1 tim tim   638 Nov 27 12:41 env_func.c
-rw-rw-r-- 1 tim tim   810 Nov 27 12:42 error.c
-rw-rw-r-- 1 tim tim  1165 Nov 27 12:44 execute.c
-rw-rw-r-- 1 tim tim   244 Nov 27 12:45 hsh.c
-rwxrwxr-x 1 tim tim 57232 Nov 26 18:01 hshnew
-rwxrwxr-x 1 tim tim 57120 Nov 26 18:05 hshtest
-rwxrwxr-x 1 tim tim 57120 Nov 26 18:15 hshtest1
-rwxrwxr-x 1 tim tim 57128 Nov 26 18:17 hshtest2
-rwxrwxr-x 1 tim tim 57128 Nov 26 18:19 ihateshell
-rwxrwxr-x 1 tim tim 57120 Nov 26 18:22 ihateshell2
-rw-rw-r-- 1 tim tim   678 Nov 27 12:41 itoa.c
-rw-rw-r-- 1 tim tim   909 Nov 26 18:05 make_path.c
-rw-rw-r-- 1 tim tim  1108 Nov 26 15:23 man_1_simple_shell
-rwxrwxr-x 1 tim tim 53336 Nov 27 12:50 saturdayshell
-rw-rw-r-- 1 tim tim  1061 Nov 27 12:39 shell.c
-rw-rw-r-- 1 tim tim  1324 Nov 26 19:34 shell.h
-rw-rw-r-- 1 tim tim  2006 Nov 26 19:33 strings.c
-rw-rw-r-- 1 tim tim  1232 Nov 27 12:46 tokenize.c
```


## ***List of allowed functions and system calls***
***
|FUNCTION/SYSTEM CALL|  MAN PAGE | More INFO | 
|-----|------|------|
|**access** | (man 2 access)|    INFO    |
|**chdir** | (man 2 chdir)|  INFO    |
|**close** | (man 2 close)|  INFO    |
|**closedir** | (man 3 closedir)|    INFO    |
|**execve** | (man 2 execve)|    INFO    |
|**exit** | (man 3 exit)|    INFO    |
|**_exit** | (man 2 _exit)|  INFO    |
|**fflush** | (man 3 fflush)|    INFO    |
|**fork** | (man 2 fork)|    INFO    |
|**free** | (man 3 free)|    INFO    |
|**getcwd** | (man 3 getcwd)|    INFO    |
|**getline** | (man 3 getline)|  INFO    |
|**getpid** | (man 2 getpid)|    INFO    |
|**isatty** | (man 3 isatty)|    INFO    |
|**kill** | (man 2 kill)|    INFO    |
|**malloc** | (man 3 malloc)|    INFO    |
|**open** | (man 2 open)|    INFO    |
|**opendir** | (man 3 opendir)|  INFO    |
|**perror** | (man 3 perror)|    INFO    |
|**read** | (man 2 read)|    INFO    |
|**readdir** | (man 3 readdir)|  INFO    |
|**signal** | (man 2 signal)|    INFO    |
|**stat** | (__xstat) (man 2 stat)|  INFO    |
|**lstat** | (__lxstat) (man 2 lstat)|   INFO    |
|**fstat** | (__fxstat) (man 2 fstat)|   INFO    |
|**strtok** | (man 3 strtok) INFO    |
|**wait** | (man 2 wait)|    INFO    |
|**waitpid** | (man 2 waitpid)|  INFO    |
|**wait3** | (man 2 wait3)|  INFO    |
|**wait4** | (man 2 wait4)|  INFO    |
|**write** | (man 2 write)|  INFO    |
***
```
## Authors
Jeremy Stevenson
Tim Simms
