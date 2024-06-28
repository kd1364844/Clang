#include<stdio.h>
main()
{
	int a, b;
	int* p_a, * p_b;
	a = 100, b = 10;
	p_a = &a, p_b = &b;
	printf("%d+%d=%d\n", a, b, *p_a + *p_b);
	printf("%d-%d=%d\n", a, b, *p_a - *p_b);
	printf("%d*%d=%d\n", a, b, *p_a * *p_b);
	printf("%d/%d=%d\n", a, b, *p_a / *p_b);
}