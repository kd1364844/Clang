#include<stdio.h>
main()
{
	char syo;
	int su1, su2, su3;
	printf("���������:");
	scanf("%c", &syo);
	printf("���������:");
	scanf("%d%d%d", &su1, &su2, &su3);
	switch (syo)
	{
	case 'g': case 'G':printf("���v��%d�ł�\n", su1 + su2 + su3); break;
	case 'h': case 'H':printf("���ς�%.2f�ł�\n", (float)(su1 + su2 + su3) / 3); break;
	case 'd': case 'D':
		if (su1 > su2)
		{
			if (su1 > su3)
			{
				printf("�ő�l��%d�ł�\n", su1);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", su3);
			}
		}
		else
		{
			if (su2 > su3)
			{
				printf("�ő�l��%d�ł�\n", su2);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", su3);
			}
		}; break;
	case 'S': case's':
		if (su1 < su2)
		{
			if (su1 < su3)
			{
				printf("�ŏ��l��%d�ł�\n", su1);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", su3);
			}
		}
		else
		{
			if (su2 < su3)
			{
				printf("�ŏ��l��%d�ł�\n", su2);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", su3);
			}
		}; break;
	}
}
