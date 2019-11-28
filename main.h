<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_

/* Libraries */

=======
#ifndef MAIN_H
#define MAIN_H
>>>>>>> 838bfe6ae5ba4617d7fff26fcc0b37b57ac2db87
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <errno.h>
<<<<<<< HEAD
#include <dirent.h>

/* Prototypes */

int _strcmp(char *s1, char *s2);
int exit_func(char *str);
char **_fgetpath(void);
char *_fwhich(char **s1, char *s2);
void ctrlc(int num);
#endif /* _MAIN_H_ */
=======
extern char **environ;
char **_fgetpath(void);
char *_fwhich(char **s1, char *s2);
void _fctrlc(int num);
#endif
>>>>>>> 838bfe6ae5ba4617d7fff26fcc0b37b57ac2db87
