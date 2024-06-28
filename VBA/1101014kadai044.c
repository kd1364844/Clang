#include<stdio.h>
main()
{
	int su;
	printf("整数(-999で入力終了)?");
	scanf("%d", &su);
	while (su != -999)
	{
		printf("8進数%o\t16進数%X\n", su, su);

		printf("整数(-999で入力終了)?");
		scanf("%d", &su);

	}
}