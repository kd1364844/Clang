#include<stdio.h>
main()
{
	int a, cnt, kei = 0, i = 0;
	printf("����>");
	cnt = scanf("%d", &a);
	while (cnt != EOF)
	{
		kei = kei + a;
		i++;
		printf("����>");
		cnt = scanf("%d", &a);
	}
	printf("���v=%d ����=%.2f\n", kei, (float)kei / i);
}