
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

char *s21_strcpy(char *restrict str1, const char *restrict str2) {
    
    if (str1 == NULL || str2 == NULL) return NULL;
    
    size_t len = s21_strlen(str2);
    char *temp = realloc(str1, len + 1);
    if (temp == NULL) {
        free(str1);
        return NULL;
    }
    str1 = temp;
    for (size_t i = 0; i <= len; i++) {
        str1[i] = str2[i];
    }

    return str1;
}

int main() {
    char *str1 = malloc(3);
    if (!str1) return 1;
    const char *restrict str2 = "Hi";
    
    if (s21_strcpy(str1, str2) == NULL) {
        free(str1);
        return 1;
    }

    printf("%s\n", str1);
    free(str1);

    return 0;
}