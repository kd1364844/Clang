#include<stdio.h>
main()
{
	int a[2][2][3] = { {{3,4,5}, { 4,5,6 }},{{2,2,3}, { 2,5,6 }} };
	int h, i, j, gokei = 0;
	for (h = 0; h <= 1; h++)
	{
		printf("�A�p�[�g%d", h+1);
		for (i = 0; i <= 1; i++)
		{
			printf("(%d�K):", i+1);
			for (j = 0; j <= 2; j++)
			{
				printf("%d ", a[h][i][j]);
				gokei += a[h][i][j];
			}
			printf("\t");
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�\n", gokei);
}