#ifndef MAIN_H
#define MAIN_H

/**
* File: main.h
* Author: Fiimai
* Description: A header file containing all prototypes of functions stated in
*	the 0X0B-malloc_free directory.
**/

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
