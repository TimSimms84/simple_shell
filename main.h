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

typedef struct char spc_chars ->
{
	.par = '34';
	.com = '39';
	.tik = '96';
	.bkslsh = '92';
	.aster = '42';
	.ampers = '38';
	.octoth = '35';
} char spec_chars;

#endif
