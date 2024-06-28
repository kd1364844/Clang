#include<stdio.h>
main()
{
	int h, i;
	float x[3][2], gokei;
	for (h = 0; h <= 2; h++)
	{
		for (i = 0,gokei=0; i <= 1; i++)
		{
			printf("x[%d][%d]=", h, i);
			scanf("%f", &x[h][i]);
			gokei += x[h][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n", h, gokei / 2);
	}
}