#include<stdio.h>
main()
{
	int su;
	printf("数を入れて:");
	scanf("%d", &su);
	while (su > 0)
	{
		printf("*");
		su -= 1;
	}
}