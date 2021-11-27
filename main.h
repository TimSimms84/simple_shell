#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stddef.h>
#include <stdalign.h>
#include <string.h>
#include <stdlib.h>

int _strlen(const char *s);
char *_strtok_r(char *str, const char *delim, char **saveptr);
char put_prompt(void);
int main(int argc, char **argv);

typedef struct spec_char {
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

typedef struct command {
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

typedef struct args {
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



#endif
