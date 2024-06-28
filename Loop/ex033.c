#include<stdio.h>
main()
{
	int su, kei, ca;
	printf("”‚ÍH");
	scanf("%d", &su);
	for (kei = 0, ca = 0; su != -999; ca++)
	{
		kei += su;
		printf("”‚ÍH");
		scanf("%d", &su);
	}
	printf("‡Œv%d\t•½‹Ï%.2f\n", kei, (float)kei / ca);
}