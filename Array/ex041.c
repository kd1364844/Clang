#include<stdio.h>
main()
{
	float box[3], kei;
	int i;
	kei = 0;
	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		kei += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·\n", kei, kei / 3);
}