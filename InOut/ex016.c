#include<stdio.h>
main()
{
	float su;
	printf("実数を入れて:");
	scanf("%f", &su);
	printf("2倍すると%5.2f\n", su * 2);
	printf("3倍すると%5.2f\n", su * 3);
}