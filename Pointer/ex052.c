#include<stdio.h>
main()
{
	int a = 100, b = 200,hzn;
	int *p_a, *p_b;
	p_a = &a;
	p_b = &b;
	printf("é¿çsëO: a=%d\tb=%d\n", a, b);
	hzn = *p_a;
	*p_a = *p_b;
	*p_b = hzn;
	printf("é¿çså„: a=%d\tb=%d\n", a, b);
}