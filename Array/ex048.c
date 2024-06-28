#include<stdio.h>
main()
{
	int a[2][2][3] = { {{3,4,5}, { 4,5,6 }},{{2,2,3}, { 2,5,6 }} };
	int h, i, j, gokei = 0;
	for (h = 0; h <= 1; h++)
	{
		printf("アパート%d", h+1);
		for (i = 0; i <= 1; i++)
		{
			printf("(%d階):", i+1);
			for (j = 0; j <= 2; j++)
			{
				printf("%d ", a[h][i][j]);
				gokei += a[h][i][j];
			}
			printf("\t");
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます\n", gokei);
}