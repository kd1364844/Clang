#include<stdio.h>
main()
{
	int i, ka;
	printf("���́H");
	scanf("%d", &i);
	do
	{
		ka = 1;
		do
		{
			printf("*");
			ka++;
		} while (ka < 6);
		printf("\n");
		i--;
	} while (i > 0);
}