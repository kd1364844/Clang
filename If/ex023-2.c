#include<stdio.h>
main()
{
	int seireki;
	printf("��������:");
	scanf("%d", &seireki);
	if (seireki % 100 != 0 && seireki % 400 == 0)
	{
		printf("���邤�N�ł�\n");
	}
	else
	{
		if (seireki % 4 == 0)
		{
			printf("���邤�N�ł�\n");
		}
		else
		{
			printf("���邤�N�ł͂Ȃ��ł�\n");
		}
	}
}
