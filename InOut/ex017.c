#include <stdio.h>
main()
{
	float f1 = 0.0;
	float f2 = 0.0;
	float f3 = 0.0;
	float sum, avg;
	printf("�P�ڎ���:");
	scanf("%f", &f1);
	printf("�Q�ڎ���:");
	scanf("%f", &f2);
	printf("�R�ڎ���:");
	scanf("%f", &f3);
	sum = f1 + f2 + f3;
	avg = sum / 3;
	printf("���v��%f\t���ρ�%f\n", sum, avg);
}