#include<stdio.h>
main()
{
	int su, kei, ca;
	printf("���́H");
	scanf("%d", &su);
	for (kei = 0, ca = 0; su != -999; ca++)
	{
		kei += su;
		printf("���́H");
		scanf("%d", &su);
	}
	printf("���v��%d\t���ρ�%.2f\n", kei, (float)kei / ca);
}