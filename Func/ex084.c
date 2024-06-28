#include<stdio.h>
void gyakujun(char* p1, char* p2);
main()
{
	char str1[256];
	char str2[256];
	printf("•¶Žš—ñH:");
	gets(str1);
	gyakujun(str1, str2);
	printf("str1:%s\nstr2:%s\n", str1, str2);
}
void gyakujun(char* p1, char* p2)
{
	int i, j;
	for (i = 0; *(p1 + i) != '\0'; i++);
	for (j = 0; i >= 0; i--, j++)
	{
		*(p2 + j) = *(p1 + i);
	}
	*(p2 + j) = '\0';
}