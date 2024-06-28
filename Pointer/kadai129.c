#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int hzn[30];
	int* p_a = a, * p_b = b, * p_hzn = hzn,i;
	while (*p_hzn++ = *p_a++);
	p_a = a;
	while (*p_a++ = *p_b++);
	p_b = b;
	p_hzn = hzn;
	while (*p_b++ = *p_hzn++);
	for (i = 0; a[i] != 0; i++)
	{
		printf("%d, ",a[i]);
	}
}
