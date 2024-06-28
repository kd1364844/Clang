#include<stdio.h>
main()
{
	int i, s, d[] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	printf("’Tõ’ns‚ğ“ü—Í:");
	scanf("%d", &s);
	i = 0;
	do
	{
		if (d[i] == s)break;
		i++;
	} while (i < 10);
	if (i == 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("d[%d]\n", i);
	}
}