#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int *p_a, *p_b, *p_hzn;
	p_a = &a;
	p_b = &b;
	printf("���s�O: *p_a=%d\t*p_b=%d\n", *p_a, *p_b);
	p_hzn = p_a;
	p_a = p_b;
	p_b = p_hzn;
	printf("���s��: *p_a=%d\t*p_b=%d\n", *p_a, *p_b);
}