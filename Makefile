CC=gcc
CFLAGS=-Wall -Werror -Wextra

all: strlen_tests strcmp_tests strcpy_tests strcat_tests

strlen_tests: 
	$(CC) $(CFLAGS) -D S21_STRLEN_TEST s21_string_test.c s21_string.c -o ../build/Quest_1
strcmp_tests: 
	$(CC) $(CFLAGS) -D S21_STRCMP_TEST s21_string_test.c s21_string.c -o ../build/Quest_2
strcpy_tests:
	$(CC) $(CFLAGS) -D S21_STRCPY_TEST s21_string_test.c s21_string.c -o ../build/Quest_3
strcat_tests: 
	$(CC) $(CFLAGS) -D S21_STRCAT_TEST s21_string_test.c s21_string.c -o ../build/Quest_4

clean:
	rm -f *.o

rebuild: clean all