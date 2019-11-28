#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <errno.h>
extern char **environ;
char **_fgetpath(void);
char *_fwhich(char **s1, char *s2);
void _fctrlc(int num);
#endif
