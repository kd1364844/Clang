#include<stdio.h>
void keihei(int x, int y, int* kei, float* hei);
main()
{
	int a, b, kei;
	float hei;
	printf("����2����:");
	scanf("%d%d", &a, &b);
	keihei(a, b, &kei, &hei);
	printf("���v�� %d�A���ς� %.2f\n", kei, hei);
}
void keihei(int x, int y, int* kei, float* hei)
{
	*kei = x + y;
	*hei = *kei / 2.0;
}