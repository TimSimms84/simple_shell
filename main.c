#include "main.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	pid_t pid;
	pid_t ppid;
	int i;

	pid = getpid();
	ppid = getppid();
	printf("pid: %d\n", pid);
	printf("ppid: %d\n", ppid);

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}

	/*
	test_strlen();
	*/
	char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %d\n", _strlen(a));
    printf("Length of string b = %d\n", _strlen(b));

	/*
	The following code is to test the strtok_r function
	*/
	char *str = "This is a test string";
	_strtok_r(str, " ", NULL);

	return (0);

}
