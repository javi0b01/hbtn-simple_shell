#ifndef _MAIN_H_
#define _MAIN_H_

/* Libraries */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <errno.h>
#include <dirent.h>
#include <string.h>

/* Prototypes */

int _strcmp(char *s1, char *s2);
int exit_func(char *str);
char **_fgetpath(void);
char *_fwhich(char **s1, char *s2);
void _fctrlc(int num);
extern char **environ;

#endif /* _MAIN_H_ */

