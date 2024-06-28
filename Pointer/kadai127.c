#include<stdio.h>
main()
{
	double data[5] = { 10.800000,20.300000,30.600000,40.400000,50.500000 };
	double* p, sum=0.0, avg;
	int i;
	for (p = data, i = 0; i < 5; i++, p++)
	{
		sum += *p;
	}
	avg = sum / 5;
	printf("‡Œv = %.3lf\n•½‹Ï = %.3lf\n", sum, avg);
}