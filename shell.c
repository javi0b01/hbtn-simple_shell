#include "holberton.h"
/**
 * main - This is the main program of shell
 * Return: Exit the program return to 0
 */
int main(void)
{
	char *buffer = NULL, *argv[] = {"", NULL}, *token;
	size_t len = 0;
	int var1, var2, var3;

	signal(SIGINT, ctrlc);
	while (1)
	{
		write(1, "#cisfun$ ", 9);
		buffer = NULL;
		var1 = getline(&buffer, &len, stdin);

		if (var1 == -1)
		{
			perror("./shell");
			free(buffer);
			exit(-1);
		}
		token = strtok(buffer, "\n\t");
		exit_func(buffer);
		if (fork() == 0)
		{
			var3 = execve(token, argv, NULL);
			if (var3 == -1)
			{
				free(buffer);
				exit(-1);
			}
		}
		else
		{
			wait(&var2);
		}
		free(buffer);
	}
	return (0);
}
