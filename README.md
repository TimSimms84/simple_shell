# Welcome to Holberton Simple Shell

## ABOUT:
The simple shell is a command line interpreter that was first conceived by Ken Thompson in 1971. Users can direct the operation of the computer by entering commands as text for a command line interpreter to execute, or by creating text scripts of one or more such commands. This shell includes basic functionality found in the traditional Unix shell.

## VERSION
This version of simple shell has been used on Ubuntu 20.04.5 LTS

## TO RUN:
Clone this repo:
```git clone "https://github.com/set808/simple_shell.git"```

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
$ total 112
-rw-rw-r-- 1 vagrant vagrant   642 Mar 27 03:53 builtin_func.c
-rw-rw-r-- 1 vagrant vagrant   648 Mar 26 00:53 check_builtin.c
-rw-rw-r-- 1 vagrant vagrant   559 Mar 25 20:43 check_path.c
-rw-rw-r-- 1 vagrant vagrant   646 Mar 27 03:53 env_func.c
-rw-rw-r-- 1 vagrant vagrant   423 Mar 26 23:08 _environ.c
-rw-rw-r-- 1 vagrant vagrant  2011 Mar 27 03:53 env_set.c
-rw-rw-r-- 1 vagrant vagrant   948 Mar 26 22:57 execute.c
-rwxrwxr-x 1 vagrant vagrant 35625 Mar 27 18:57 hsh
-rw-rw-r-- 1 vagrant vagrant   120 Mar 27 03:53 hsh.c
-rw-rw-r-- 1 vagrant vagrant   515 Mar 27 05:14 loop.c
-rw-rw-r-- 1 vagrant vagrant  1118 Mar 27 03:53 make_path.c
-rw-rw-r-- 1 vagrant vagrant   594 Mar 24 23:28 mem_fun.c
-rw-rw-r-- 1 vagrant vagrant   350 Mar 26 23:02 read_line.c
-rw-rw-r-- 1 vagrant vagrant     8 Mar 17 06:53 README.md
-rw-rw-r-- 1 vagrant vagrant  1575 Mar 27 03:53 shell.h
-rw-rw-r-- 1 vagrant vagrant  2318 Mar 27 05:19 string_func.c
-rw-rw-r-- 1 vagrant vagrant  1139 Mar 27 03:53 string_func_dos.c
-rw-rw-r-- 1 vagrant vagrant   873 Mar 27 03:42 _strtok.c
-rw-rw-r-- 1 vagrant vagrant   877 Mar 27 05:15 tokenize.c
-rw-rw-r-- 1 vagrant vagrant   290 Mar 24 23:28 word_count.c

# simple shell

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
