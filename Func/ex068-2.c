#include<stdio.h>
main()
{
	char a[100];
	char* c;
	printf("���������>");
	c = gets(a);
	while (c != NULL)
	{
		printf("���͂��ꂽ�̂�%s\n", c);
		printf("���������>");
		c = gets(a);
	}

}