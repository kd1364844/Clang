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
			printf("�� �m�[�}��\n");
		}
		if (gacha >= 20 && gacha < 50)
		{
			printf("�� �� ���A\n");
		}
		if (gacha >= 6 && gacha < 20)
		{
			printf("�� �� �� SR\n");
		}
		if (gacha >= 2 && gacha < 6)
		{
			printf("�� �� �� �� UR\n");
		}
		if (gacha == 1)
		{
			printf("�� �� �� �� �� LR\n");
		}
	}
}