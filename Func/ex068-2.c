#include<stdio.h>
main()
{
	char a[100];
	char* c;
	printf("文字列入力>");
	c = gets(a);
	while (c != NULL)
	{
		printf("入力されたのは%s\n", c);
		printf("文字列入力>");
		c = gets(a);
	}

}