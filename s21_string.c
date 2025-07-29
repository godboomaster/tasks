#include "s21_string.h"
#include <stdio.h>
#include <stdlib.h>

size_t s21_strlen(const char *str) {
    if (str == NULL) return 0;
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int s21_strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

char *s21_strcpy(char *restrict str1, const char *restrict str2) {
    if (str2 == NULL) return NULL;
    
    size_t len = s21_strlen(str2);
    char *temp = realloc(str1, len + 1);
    if (temp == NULL) {
        return NULL;
    }
    str1 = temp;
    for (size_t i = 0; i <= len; i++) {
        str1[i] = str2[i];
    }
    return str1;
}

/*char *s21_strcat(char *str1, const char *str2) {
    int len_s1 = s21_strlen(str1);
    int len_s2 = s21_strlen(str2);
    int size = len_s1 + len_s2 + 1;

    char *s = calloc(size, sizeof(char));
}*/
