#include<stdio.h>
main()
{
	int su, sum;
	sum = 0;
	while (1)
	{
		printf("�������āF");
		scanf("%d", &su);
		if (su == -999)break;
		sum += su;
	}
	printf("���v��%d\n", sum);
}