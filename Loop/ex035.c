#include<stdio.h>
main()
{
	int su, sum;
	sum = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &su);
		if (su == -999)break;
		sum += su;
	}
	printf("‡Œv%d\n", sum);
}