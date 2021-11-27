#include "main.h"
/**
 *
 *
 *
 */
void main_loop(void)
{
	char *line;
	char **args;
	int status;

	

	do {
		put_prompt();
		line = read_line();
		args = parse_line(line);
		status = execute(args);
	}while (status);

	free(line);
	free(args);

	return;

}

read_line()
{
	char *line = NULL;
	ssize_t bufsize = 0;
	getline(&line, &bufsize, stdin);
	return line;
}

parse_line()
{
	char *token;
	char **args;
	int i = 0;

	token = strtok(line, " ");
	args = malloc(sizeof(char *) * MAX_ARGS);

	while (token != NULL)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, " ");
	}

	args[i] = NULL;
	return args;
}

execute(char **args)
{
	int status;
	pid_t pid;

	if (args[0] == NULL)
	{
		return 1;
	}

	if (strcmp(args[0], "exit") == 0)
	{
		return 0;
	}

	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("loop");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("loop");
	}
	else
	{
		do
		{
			pid = waitpid(pid, &status, WUNTRACED);
		}while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
