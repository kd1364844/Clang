#include<stdio.h>
main()
{
	int a, b, cnt;
	printf("数を2個入力>");
	cnt = scanf("%d%d", a, b);
	if (cnt == EOF)
	{
		printf("EOF\n");
	}
	else
	{
		printf("%d個入力\n", cnt);
	}
}