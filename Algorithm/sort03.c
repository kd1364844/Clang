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

	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (d[j + 1] >= d[j])
			{
				break;
			}
			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
		}
	}

	printf("•À‚Ñ‘Ö‚¦Œã\n");
	for (i = 0; i < 5; i++)
	{
		printf("d[%d] = %d\n", i, d[i]);
	}
}