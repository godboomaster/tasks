#include "s21_string.h"
#include <stdio.h>
#include <stdlib.h>

void s21_strlen_test(char *str);
void s21_strcmp_test(char *str1, char *str2);
void s21_strcpy_test(char *str1, const char *str2);

int main() {
  

#ifdef S21_STRLEN_TEST
    char *str = 0;
    s21_strlen_test(str);
#endif

#ifdef S21_STRCMP_TEST
    char *str = 0;
    char *str2 = 0;
    s21_strcmp_test(str, str2);
#endif

#ifdef S21_STRCPY_TEST
    char *str1 = 0;
    const char *str2 = 0;
    s21_strcpy_test(str1, str2);
#endif

/*#ifdef S21_STRCAT_TEST
  char *str2 = 0;
  s21_strcat_test(str, str2);
#endif*/



    return 0;
}

#ifdef S21_STRLEN_TEST
void s21_strlen_test(char *str) {
    str = "Abc";
    printf("Test1:\n%s\n3\n", str);
    if (s21_strlen(str) == 3)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
    
    str = "12345";
    printf("Test2:\n%s\n5\n", str);
    if (s21_strlen(str) == 5)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
    
    str = "";
    printf("Test3:\n%s\n0\n", str);
    if (s21_strlen(str) == 0)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
}
#endif

#ifdef S21_STRCMP_TEST
void s21_strcmp_test(char *str1, char *str2) {
    str1 = "hello";
    str2 = "hello";
    printf("Test1:\n%s %s\n", str1, str2);
    if (s21_strcmp(str1, str2) == 0)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
    
    str1 = "";
    str2 = "hello";
    printf("Test2:\n%s %s\n", str1, str2);
    if (s21_strcmp(str1, str2) < 0)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
    
    str1 = "124";
    str2 = "123";
    printf("Test3:\n%s %s\n", str1, str2);
    if (s21_strcmp(str1, str2) > 0)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
}
#endif

#ifdef S21_STRCPY_TEST
void s21_strcpy_test(char *str1, const char *str2) {
    str1 = NULL;
    str2 = "";
    printf("Test1: str1 = '%s', str2 = '%s'\n", str1, str2);
    printf("Ожидаем: результат пустая строка\n");
    str1 = s21_strcpy(str1, str2);
    if (str1[0] == str2[0])
        printf("SUCCESS\n");
    else
        printf("FAIL\n");

    str1 = NULL;
    str2 = "A";
    printf("Test 2: str1 = '%s', str2 = '%s'\n", str1, str2);
    printf("Ожидаем: 'A'\n");
    str1 = s21_strcpy(str1, str2);
    size_t len = s21_strlen(str2);
    size_t check = 0;
    for (size_t i = 0; i < len; i++) {
        if (str1[i] == str2[i])
            check++;
    }
    if (check == len)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");

    str1 = s21_strcpy(NULL, "12345");
    str2 = "abcde";
    printf("Test 3: str1 = '%s', str2 = '%s'\n", str1, str2);
    printf("Ожидаем: abcde\n");
    str1 = s21_strcpy(str1, str2);
    len = s21_strlen(str2);
    check = 0;
    for (size_t i = 0; i < len; i++) {
        if (str1[i] == str2[i])
            check++;
    }
    if (check == len)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
        
    str1 = s21_strcpy(NULL, "12345");
    str2 = "1";
    printf("Test 3: str1 = '%s', str2 = '%s'\n", str1, str2);
    printf("Ожидаем: 1\n");
    str1 = s21_strcpy(str1, str2);
    len = s21_strlen(str2);
    check = 0;
    for (size_t i = 0; i < len; i++) {
        if (str1[i] == str2[i])
            check++;
    }
    if (check == len)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
}
#endif

/*#ifdef S21_STRCAT_TEST
void s21_strcat_test(char *str1, char *str2) {
    char *str1 = malloc(3);
    const char *restrict str2 = "World";

    if (s21_strcpy(str1, str2) == NULL) {
        printf("FAIL\n");
        free(str1);
    } else printf("SUCCESS\n");
}
#endif
*/