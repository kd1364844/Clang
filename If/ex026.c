#include<stdio.h>
main()
{
	int tuki, seireki;
	printf("��������:");
	scanf("%d", &seireki);
	printf("�������:");
	scanf("%d", &tuki);
	if (tuki == 2)
	{
		if (seireki % 100 != 0 && seireki % 400 == 0)
		{
			printf("�ŏI���͂Q�X���ł�\n");
		}
		else
		{
			if (seireki % 4 == 0)
			{
				printf("�ŏI���͂Q�X���ł�\n");
			}
		}
	}
	else
	{
		if (tuki == 4 || tuki == 6 || tuki == 9 || tuki == 11)
		{
			printf("�ŏI���͂R�O���ł�\n");
		}
		else
		{
			printf("�ŏI���͂R�P���ł�\n");
		}
	}
}