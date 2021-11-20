#include "main.h"
/**
 * @brief 
 * 
 * 
 */
char put_prompt(void)
{
	char *prompt = "$ ";
	write(1, prompt, _strlen(prompt));
	return (0);
}
