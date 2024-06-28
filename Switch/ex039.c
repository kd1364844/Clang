#include<stdio.h>
main()
{
	char syo;
	int su1, su2, su3;
	printf("処理を入力:");
	scanf("%c", &syo);
	printf("整数を入力:");
	scanf("%d%d%d", &su1, &su2, &su3);
	switch (syo)
	{
	case 'g': case 'G':printf("合計は%dです\n", su1 + su2 + su3); break;
	case 'h': case 'H':printf("平均は%.2fです\n", (float)(su1 + su2 + su3) / 3); break;
	case 'd': case 'D':
		if (su1 > su2)
		{
			if (su1 > su3)
			{
				printf("最大値は%dです\n", su1);
			}
			else
			{
				printf("最大値は%dです\n", su3);
			}
		}
		else
		{
			if (su2 > su3)
			{
				printf("最大値は%dです\n", su2);
			}
			else
			{
				printf("最大値は%dです\n", su3);
			}
		}; break;
	case 'S': case's':
		if (su1 < su2)
		{
			if (su1 < su3)
			{
				printf("最小値は%dです\n", su1);
			}
			else
			{
				printf("最小値は%dです\n", su3);
			}
		}
		else
		{
			if (su2 < su3)
			{
				printf("最小値は%dです\n", su2);
			}
			else
			{
				printf("最小値は%dです\n", su3);
			}
		}; break;
	}
}
