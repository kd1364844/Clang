#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 }, i, kei=0;
	float b[] = { 11.1,22.2,33.3,44.4 }, fkei=0;
	int *p_a;
	float *p_b;
	for (i = 0; i < 6; i++)
	{
		p_a = &a[i];
		kei += *p_a;
	}
	printf("�z��a ���v=%7d\t����=%.3f\n", kei, (float)kei / i);
	for (i = 0; i < 4; i++)
	{
		p_b = &b[i];
		fkei += *p_b;
	}
	printf("�z��b ���v=%.3f\t����=%.3f\n", fkei, fkei / i);
}