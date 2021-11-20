#include "main.h"


char *_strtok_r(char *str, const char *delim, char **saveptr)
{
	char *token;
	char *tmp;
	char *tmp2;
	int i;

	if (str == NULL)
		str = *saveptr;
	if (str == NULL)
		return (NULL);
	tmp = str;
	while (*tmp != '\0')
	{
		i = 0;
		tmp2 = (char *)delim;
		while (*tmp2 != '\0')
		{
			if (*tmp == *tmp2)
			{
				*tmp = '\0';
				*saveptr = tmp + 1;
				return (tmp);
			}
			tmp2++;
		}
		tmp++;
	}
	*saveptr = NULL;
	return (str);
}
