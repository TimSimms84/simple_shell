#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stddef.h>
#include <stdalign.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat>

int _strlen(const char *s);
char *_strtok_r(char *str, const char *delim, char **saveptr);
char put_prompt(void);
int main(int argc, char **argv);
char *read_line(void);
char **parse_line(char *line);
int execute(char **args);
char *_strdup(const char *s1);
char *_strcat(char *dest, const char *src);
char *_strcpy(char *dest, const char *src);
char *_strchr(const char *s, int c);

typedef struct spec_char
{
	char *name;
	char *value;
} spec_char;

spec_char spec_chars[] = {
	{"\\n", "\n"},
	{"\\t", "\t"},
	{"\\r", "\r"},
	{"\\v", "\v"},
	{"\\b", "\b"},
	{"\\a", "\a"},
	{"\\f", "\f"},
	{"\\0", "\0"},
	{"\\\"", "\""},
	{"\\\'", "\'"},
	{"\\?", "?"},
	{"\\#", "#"},
	{"\\`", "`"},
	{"\\'", "'"},
	{"\\*", "*"},
	{"\\&", "&"},
	{"\\"", """},
};

typedef struct command
{
	char *name;
	char *value;
} command;

command commands[] = {
	{"echo", "echo"},
	{"cd", "cd"},
	{"pwd", "pwd"},
	{"exit", "exit"},
	{"env", "env"},
	{"setenv", "setenv"},
	{"unsetenv", "unsetenv"},
	{"ls", "ls"},
	{"cat", "cat"},
	{"rm", "rm"},
	{"mv", "mv"},
	{"cp", "cp"},
	{"mkdir", "mkdir"},
	{"rmdir", "rmdir"},
	{"chmod", "chmod"},
	{"chown", "chown"},
	{"chgrp", "chgrp"},
	{"touch", "touch"},
	{"history", "history"},
};

typedef struct args
{
	char *name;
	char *value;
} args;

args args_list[] = {
	{"-a", "-a"},
	{"-l", "-l"},
	{"-r", "-r"},
	{"-t", "-t"},
	{"-R", "-R"},
	{"-d", "-d"},
	{"-c", "-c"},
	{"-b", "-b"},
	{"-u", "-u"},
	{"-g", "-g"},
	{"-k", "-k"},
	{"-m", "-m"},
	{"-s", "-s"},
	{"-S", "-S"},
	{"-p", "-p"},
	{"-n", "-n"},
	{"-o", "-o"},
	{"-O", "-O"},
	{"-G", "-G"},
	{"-L", "-L"},
	{"-h", "-h"},
	{"-H", "-H"},
};

typedef signals
{
	char *name;
	char *value;
} signals;

signals signals_list[] = {
	{"SIGABRT", "SIGABRT"},
	{"SIGALRM", "SIGALRM"},
	{"SIGBUS", "SIGBUS"},
	{"SIGCHLD", "SIGCHLD"},
	{"SIGCONT", "SIGCONT"},
	{"SIGFPE", "SIGFPE"},
	{"SIGHUP", "SIGHUP"},
	{"SIGILL", "SIGILL"},
	{"SIGINT", "SIGINT"},
	{"SIGKILL", "SIGKILL"},
	{"SIGPIPE", "SIGPIPE"},
	{"SIGQUIT", "SIGQUIT"},
	{"SIGSEGV", "SIGSEGV"},
	{"SIGSTOP", "SIGSTOP"},
	{"SIGTERM", "SIGTERM"},
	{"SIGTSTP", "SIGTSTP"},
	{"SIGTTIN", "SIGTTIN"},
	{"SIGTTOU", "SIGTTOU"},
	{"SIGUSR1", "SIGUSR1"},
	{"SIGUSR2", "SIGUSR2"},
	{"SIGPOLL", "SIGPOLL"},
	{"SIGPROF", "SIGPROF"},
	{"SIGSYS", "SIGSYS"},
	{"SIGTRAP", "SIGTRAP"},
	{"SIGURG", "SIGURG"},
	{"SIGVTALRM", "SIGVTALRM"},
	{"SIGXCPU", "SIGXCPU"},
	{"SIGXFSZ", "SIGXFSZ"},
};


#endif
