#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;
	printf("•À‚Ñ‘Ö‚¦‘O\n");
	for (i = 0; i < 5; i++)
	{
		printf("d[%d] = %d\n", i, d[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("•À‚Ñ‘Ö‚¦Œã\n");
	for (i = 0; i < 5; i++)
	{
		printf("d[%d] = %d\n", i, d[i]);
	}
}