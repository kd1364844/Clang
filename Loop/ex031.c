#include<stdio.h>
main()
{
	int  su1, kei;
	su1 = 1;
	kei = 0;
	for (su1; su1 <= 10; su1 ++)
	{
		kei += su1;
		printf("‚P‚©‚ç%d‚Ü‚Å‚Ì˜a%d\n", su1, kei);
	}
}