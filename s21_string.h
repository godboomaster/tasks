#ifndef S21_STRING_H
#define S21_STRING_H
#include <stdlib.h>

size_t s21_strlen(const char *str);
int s21_strcmp(const char *str1, const char *str2);
char *s21_strcpy(char *restrict str1, const char *restrict str2);
char *s21_strcat(char *restrict str1, const char *restrict str2);
#endif // S21_STRING_H