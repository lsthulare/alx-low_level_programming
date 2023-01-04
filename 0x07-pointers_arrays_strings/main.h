#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
void *_memset(void *b, int c, size_t len);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(const char *haystack, const char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
#endif/*MAIN_H*/
