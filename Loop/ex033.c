#include<stdio.h>
main()
{
	int su, kei, ca;
	printf("数は？");
	scanf("%d", &su);
	for (kei = 0, ca = 0; su != -999; ca++)
	{
		kei += su;
		printf("数は？");
		scanf("%d", &su);
	}
	printf("合計＝%d\t平均＝%.2f\n", kei, (float)kei / ca);
}