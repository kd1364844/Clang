#include<stdio.h>
void keihei(int x, int y, int* kei, float* hei);
main()
{
	int a, b, kei;
	float hei;
	printf("整数2つ入力:");
	scanf("%d%d", &a, &b);
	keihei(a, b, &kei, &hei);
	printf("合計は %d、平均は %.2f\n", kei, hei);
}
void keihei(int x, int y, int* kei, float* hei)
{
	*kei = x + y;
	*hei = *kei / 2.0;
}