#include<stdio.h>
main()
{
	int cnt, i, su, ka;
	printf("”‚ÍH");
	scanf("%d", &su);
	i = 1;
	do
	{
		cnt = 0;
		ka = su ;
		do {
			printf(" ");
			cnt++;
		} while (ka > cnt);
		cnt = 0;
		do
		{
			printf("*");
			cnt++;
		} while (i > cnt);
		printf("\n");
		i++;
		su--;
	} while (su >0);
}