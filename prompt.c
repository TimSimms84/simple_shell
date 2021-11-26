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
    char *prompt = "$ ";

    char *CLEAR_SCREEN_ANSI;
    static int x0 = 1;
	/*
	 * Clear Screen First run
	 * TODO: Not working yet
	 */

    if (x0)
    {
        CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J"; /* ANSI Sequence to Clear Screen */
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, sizeof(char*));
            }
    else
    {
        write(1, prompt, strlen(prompt));
        putchar('\n');
        /*
        * TODO: Replace with custom putchar
        */
    }
	x0 = 1;


    return (*prompt);
}
/**
 *
 * Test putchar
 * main - VOID
 * envoke put_promtp (n)times
*/
/*
 *
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
*/
