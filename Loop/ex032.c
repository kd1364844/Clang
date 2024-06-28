#include<stdio.h>
main()
{
	int kei, bai, su;
	bai = 1;
	kei = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &su);
	for (bai; bai < 6; bai ++)
	{
		kei = su * bai;
		printf("%d\t", kei);
	}
}