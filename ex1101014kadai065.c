#include<stdio.h>
main()
{
	int su, sum, cnt;
	su = 0;
	sum = 0;
	cnt = 0;
	do
	{
		sum += su;
		cnt++;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &su);
	} while (su != -999);
	cnt--;
	printf("���v��%d\n���ρ�%f\n", sum, (float)sum / cnt);
}