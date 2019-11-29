#include "main.h"
/**
 * main - ...
 * @argc: is ...
 * @argv: is ...
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	const char split = NULL;
	pid_t process = NULL;
	size_t len = NULL;
	char **exe = NULL, **dir = NULL;
	char *s1 = NULL, *s2 = NULL, *run = NULL, *line = NULL, *command = NULL;
	int status = NULL, ret = NULL, i = NULL;

	signal(SIGINT, _fctrlc);
	while (1)
	{
		line = malloc(sizeof(char) * len);
		if (line == NULL)
		{
			free(line);
			return (1);
		}
		dir = malloc(sizeof(char) * len);
		if (dir == NULL)
		{
			free(dir);
			return (1);
		}
		exe = malloc(sizeof(char) * len);
		if (exe == NULL)
		{
			free(exe);
			return (1);
		}
		if (isatty(STDIN_FILENO))
		{
			write(1, "#cisfun$ ", 9);
		}
		ret = getline(&line, &len, stdin);
		if (ret == -1)
		{
			exit(98);
		}
		if (ret == 1)
		{
			free(line);
			free(dir);
      free(exe);
			continue;
		}
		dir = _fgetpath();
		const char split[3] = " \n\t";

		run = strtok(line, split);
		if (strcmp(run, "exit") == 0)
		{
			exit(-1);
		}
		if (access(run, F_OK) == 0)
		{
			command = run;
		}
		else
		{
			command = _fwhich(dir, run);
		}
		i = 0;
		while (command != NULL)
		{
			exe[i] = command;
			command = strtok(NULL, split);
			i++;
		}
		exe[i] = 0;
		process = fork();
		if (process < 0)
		{
			perror("Error: PROCESS !!!\n");
			return (1);
		}
		if (process == 0)
		{
			if (execve(exe[0], exe, NULL) == -1)
			{
				perror(argv[0]);
				exit(98);
			}
		}
		if (process > 0)
		{
			wait(&status);
		}
		free(line);
		free(dir);
		free(exe);
	}
	return (0);
}
