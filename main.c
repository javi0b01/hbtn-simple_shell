#include "main.h"
/**
 * main - ...
 *
 * Return: Always 0.
 */
int main()
{
	size_t len = NULL;
	char *line = NULL;
	char **exe = NULL;
	int ret = NULL;
	const char split = NULL;
	char *run = NULL;
	int i = NULL;
	pid_t process = NULL;
	int status = NULL;
	char **dir = NULL;
	char *command = NULL;
	char *s1 = NULL;
	char *s2 = NULL;
	int retfs = NULL;

	//signal(SIGINT, ctrlc);
	while (1)
	{
		line = malloc(sizeof(char) * len);
		if (line == NULL)
		{
			free(line);
			return (1);
		}
		exe = malloc(sizeof(char) * len);
		if (line == NULL)
		{
			free(exe);
			return (1);
		}
		write(1, "#cisfun$ ",9);
		if(isatty(0))
		{
			ret = getline(&line, &len, stdin);
			if (ret == 1)
			{
				free(line);
				free(exe);
				continue;
			}
		}
		else
		{
			ret = getline(&line, &len, stdin);
			if (ret == 1)
			{
				free(line);
				free(exe);
				break;
			}
			dir = _fgetpath();
			i = 0;
			while(dir[i] != NULL )
			{
				i++;
			}
			const char split[3] = " \n\t";
			run = strtok(line, split);
			if (access(run, F_OK) == 0)
			{
				command = run;
			}
			else
			{
				command = _fwhich(dir, run);
			}
			i = 0;
			while(command != NULL)
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
					perror("./shell");
				}
			}
			if (process > 0)
			{
				wait(&status);
			}
			free(line);
			free(exe);
				break;
			}
		dir = _fgetpath();
		i = 0;
		while(dir[i] != NULL )
		{
			i++;
		}
		const char split[3] = " \n\t";
		run = strtok(line, split);
		if (access(run, F_OK) == 0)
		{
			command = run;
		}
		else
		{
			command = _fwhich(dir, run);
		}
		i = 0;
		while(command != NULL)
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
				perror("./shell");
			}
		}
		if (process > 0)
		{
			wait(&status);
		}
		free(line);
		free(exe);
	}
	return (0);
}
