#include<stdio.h>
main()
{
	int su, ue;
	ue = 0;
	printf("数を入れて:");
	scanf("%d", &su);
	while (su > ue)
	{
		printf("*");
		ue += 1;
	}
}