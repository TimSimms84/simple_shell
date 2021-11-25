#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stddef.h>
#include <stdalign.h>
#include <string.h>

int _strlen(const char *s);
char *_strtok_r(char *str, const char *delim, char **saveptr);
char put_prompt(void);
int main(int ac, char **av);

typedef struct spc_chars
{
	char par = '34';
	char com = '39';
	char tik = '96';
	char bkslsh = '92';
	char aster = '42';
	char ampers = '38';
	char octoth = '35';
}spec_chars;

#endif
