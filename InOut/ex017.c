#include <stdio.h>
main()
{
	float f1 = 0.0;
	float f2 = 0.0;
	float f3 = 0.0;
	float sum, avg;
	printf("‚P‚Â–ÚÀ”:");
	scanf("%f", &f1);
	printf("‚Q‚Â–ÚÀ”:");
	scanf("%f", &f2);
	printf("‚R‚Â–ÚÀ”:");
	scanf("%f", &f3);
	sum = f1 + f2 + f3;
	avg = sum / 3;
	printf("‡Œv%f\t•½‹Ï%f\n", sum, avg);
}