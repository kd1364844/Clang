#include<stdio.h>
main()
{
	int s, low, high,mid, d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	low = 0, high = 10;
	printf("�T���l�����");
	scanf("%d", &s);
	while (low <= high)
	{
		mid = (low + high) / 2;

		if (d[mid] == s) break;
		if (s > d[mid])
		{
			low = mid + 1;
		}
		if (s < d[mid])
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("%d\n", mid);
	}
}