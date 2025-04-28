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

	while (*fsrc)
	{
		rsrc = fsrc;	//无论有没有找到相同的字符子串，都先把rsrc 指到 fsrc所在地址

		while (*fsrc == *fdest && *fdest != '\0') {		//首字符相同，开始循环比较
			fsrc++;
			fdest++;
		}
		if (*fdest == '\0') {	//找到了
			return rsrc;
		}

		//没找到,两个遍历的指针都回滚到开始比较前的位置
		fsrc = rsrc;
		fdest = dest;

		fsrc++;
	}
	return NULL;
