#include<stdio.h>
main()
{
	int seireki;
	printf("西暦を入力:");
	scanf("%d", &seireki);
	if (seireki % 100 != 0 && seireki % 400 == 0)
	{
		printf("うるう年です\n");
	}
	else
	{
		if (seireki % 4 == 0)
		{
			printf("うるう年です\n");
		}
		else
		{
			printf("うるう年ではないです\n");
		}
	}
}
