#include "main.h"
/**
 * main - ...
 * @argc: is ...
 * @argv: is ...
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	pid_t process = NULL;
	size_t len = NULL;
	char **exe = NULL, **dir = NULL;
	char *s1 = NULL, *s2 = NULL, *run = NULL, *line = NULL, *command = NULL;
	int status = NULL, ret = NULL, i = NULL;
	char *split = " \n", *cmd2 = NULL;
	int count = 0;

	signal(SIGINT, _fctrlc);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "#cisfun$ ", 9);
		ret = getline(&line, &len, stdin);
		if (ret == -1)
			exit(98);
		if (ret == 1)
		{
			free(line);
			continue;
		}
		dir = _fgetpath();

		cmd2 = strdup(line);
		if (strtok(cmd2, split))
			count++;
		else
			free(cmd2);
		while(strtok(NULL, split))
			count++;
		free(cmd2);

		run = strtok(line, split);
		if (strcmp(run, "exit") == 0)
		{
			free(dir[0]), free(dir), free(line);
			exit(0);
		}
		if (access(run, F_OK) == 0)
			command = run;
		else
			command = _fwhich(dir, run);

		exe = malloc (sizeof(char *) * (count + 1));
		exe[0] = command;
		i = 1;
		while (i < count)
		{
			exe[i] = strtok(NULL, split);
			i++;
		}
		exe[i] = NULL;

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
			wait(&status);
		free(line);
		line = NULL;
		free(dir);
		free(exe);
	}
	return (0);
}
