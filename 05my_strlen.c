#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int my_strlen(char* ch) {
	int count = 0;
	while (*ch++) {
		count++;
	}
	return count;
}

int my_strlen1(char* ch) {
	char* temp = ch;
	while (*ch) ch++;

	return ch - temp;
}

int main0501()
{
	char ch[] = "hello world";

	//int len = my_strlen(ch);
	int len = my_strlen1(ch);
	printf("%d\n", len);

	return EXIT_SUCCESS;
}

int main(void)
{
	char ch1[] = "hello";
	char ch2[] = "world";

	const char* const p = ch1;

	//p = ch2;//err
	//*p = 'm';//err
	//p[2]='m'//err

	char** p1 = &p;

	//*p1 = ch2;//ok
	*(*p1 + 1) = 'm';//ok
	printf("%s\n", p);
	return 0;
}