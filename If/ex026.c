#include<stdio.h>
main()
{
	int tuki, seireki;
	printf("西暦を入力:");
	scanf("%d", &seireki);
	printf("月を入力:");
	scanf("%d", &tuki);
	if (tuki == 2)
	{
		if (seireki % 100 != 0 && seireki % 400 == 0)
		{
			printf("最終日は２９日です\n");
		}
		else
		{
			if (seireki % 4 == 0)
			{
				printf("最終日は２９日です\n");
			}
		}
	}
	else
	{
		if (tuki == 4 || tuki == 6 || tuki == 9 || tuki == 11)
		{
			printf("最終日は３０日です\n");
		}
		else
		{
			printf("最終日は３１日です\n");
		}
	}
}