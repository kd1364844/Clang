#include<stdio.h>
main()
{
	int su, max = 0, min = 0,  cnt;
	printf("®”?");
	cnt = scanf("%d", &su);
	max = min = su;
	while (cnt != EOF)
	{
		if (max < su)
		{
			max = su;
		}
		if (min > su)
		{
			min = su;
		}
		printf("®”?");
		cnt = scanf("%d", &su);
	}
	printf("max = %d\nmin = %d\n", max, min);
}