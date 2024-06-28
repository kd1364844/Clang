#include<stdio.h>
main()
{
	int su, cnt, ka;
	ka = 1;
	printf("”‚ÍH");
	scanf("%d", &su);
	do
	{
		cnt = 0;
		do
		{
			printf("*");
			cnt++;
		} while (ka > cnt);
		printf("\n");
		ka++;
	} while (su >= ka);
}