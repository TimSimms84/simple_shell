#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/*
 * TODO: Combine Includes into main
 */
/**
 * put_promtp - Prints the Shell prompt
 * return: prompt
 */
char put_prompt(void)
{
	char *prompt = "$";

	write(1, prompt, strlen(prompt));
	putchar('\n');
	/*
	TODO: Replace with custom putchar
	*/

	return (*prompt);

}


/**
 *
 * Test putchar
 * main - VOID
 * envoke put_promtp (n)times
int main(void)
{
	int i = 0;

	while (i < 5)
	{
		put_prompt();
		i++;
	}
	return (0);
}
 *
*/
