#include<stdio.h>
main()
{
	int i, s, d[] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	printf("�T���ns�����:");
	scanf("%d", &s);
	i = 0;
	do
	{
		if (d[i] == s)break;
		i++;
	} while (i < 10);
	if (i == 10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("d[%d]\n", i);
	}
}