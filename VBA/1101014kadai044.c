#include<stdio.h>
main()
{
	int su;
	printf("����(-999�œ��͏I��)?");
	scanf("%d", &su);
	while (su != -999)
	{
		printf("8�i��%o\t16�i��%X\n", su, su);

		printf("����(-999�œ��͏I��)?");
		scanf("%d", &su);

	}
}