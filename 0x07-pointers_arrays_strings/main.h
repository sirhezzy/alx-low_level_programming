#ifndef MAIN_H
#define MAIN_H

/**
- File: main.h
- Description: prototype of all functions used in 0x07 project.
- Author: Ochoge Hezekiah
*/

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
