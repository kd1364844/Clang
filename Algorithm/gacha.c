#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int gacha, i;
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		gacha = rand() % 100 + 1;
		if (gacha >= 50)
		{
			printf("š ƒm[ƒ}ƒ‹\n");
		}
		if (gacha >= 20 && gacha < 50)
		{
			printf("š š ƒŒƒA\n");
		}
		if (gacha >= 6 && gacha < 20)
		{
			printf("š š š SR\n");
		}
		if (gacha >= 2 && gacha < 6)
		{
			printf("š š š š UR\n");
		}
		if (gacha == 1)
		{
			printf("š š š š š LR\n");
		}
	}
}