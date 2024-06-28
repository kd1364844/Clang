#include<stdio.h>
main()
{
	int h, i, gokei;
	int a[][3] = { {10,20,30},1,2,3 };
	for (i = 0; i <= 1; i++)
	{
		for (gokei=0,h=0;h <= 2; h++)
		{
			printf("a[%d][%d]=%d\n", i, h, a[i][h]);
			gokei += a[i][h];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n", i, gokei);
	}
}