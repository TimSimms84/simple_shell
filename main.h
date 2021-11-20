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
#endif
