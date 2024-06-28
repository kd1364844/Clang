#include<stdio.h>
main()
{
	double a, b, * p_a = &a, * p_b = &b;
	printf("ŽÀ”’l‚PH");
	scanf("%lf", &a);
	printf("ŽÀ”’l‚QH");
	scanf("%lf", &b);
	if (*p_a > *p_b)
	{
		printf("‘å‚«‚¢‚Ù‚¤=%.3lf\n", *p_a);
	}
	else
	{
		printf("‘å‚«‚¢‚Ù‚¤=%.3lf\n", *p_b);
	}
}