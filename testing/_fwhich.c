#include "main.h"
/**
 * _fwhich - function that ...
 */
char *_fwhich(char **s1, char *s2)
{
	struct dirent *filename;
	DIR *dir;
	char *s;
	int result;
	int i;

	i = 0;
	while(i < 16)
	{
		if((dir = opendir(s1[i])) == NULL)
		{
			perror("opendir() error");
		}
		else
		{
			while((filename = readdir(dir)) != NULL)
			{
				result = strcmp(s2, filename->d_name);
				if (result == 0) 
				{
					strcat(s1[i],"/");
					s = s1[i];
					strcat(s,s2);
					return(s);
					closedir(dir);
				}
			}
		}
		i++;
	}
	closedir(dir);
	return("END\n");
}
