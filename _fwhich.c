#include "main.h"
/**
 * _fwhich - function that ...
 * @s1: is ...
 * @s2: is ...
 * Return: the ...
 */
char *_fwhich(char **s1, char *s2)
{
	struct dirent *filename;
	DIR *dir;
	char *s;
	int result;
	int i;

	i = 0;
	while (s1[i] != NULL)
	{
		dir = (opendir(s1[i]));
		if (dir == NULL)
		{
			perror("opendir() error");
		}
		else
		{
			while ((filename = readdir(dir)) != NULL)
			{
				result = strcmp(s2, filename->d_name);
				if (result == 0)
				{
					strcat(s1[i], "/");
					s = s1[i];
					strcat(s, s2);
					closedir(dir);
					return (s);
				}
			}
		}
		i++;
	}
	closedir(dir);
	return (s2);
}
