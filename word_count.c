#include "shell.h"
/**
 * word_count - find word count
 * @s: pointer to string
 * Return: word count
 */

int word_count(char *s)
{
    int i;
    int words = 1, delim_counter = 1;
    char delim = ' ';

    if (!s)
        return (-1);
    for (i = 0; s[i] != '\0'; i++)
        {
          if (s[i] == delim)
          {
            if (delim_counter == 0)
            {
              words++;
              delim_counter = 1;
            }
          }
      else
        delim_counter = 0;
      }
    return (words);
}