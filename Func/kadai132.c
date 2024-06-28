#include<Stdio.h>
main()
{
	int su, sum = 0, i = 0, cnt;
	printf("®”?");
	cnt = scanf("%d", &su);
	while (cnt != EOF)
	{
		sum += su;
		i++;
		printf("®”?");
		cnt = scanf("%d", &su);
	}
	printf("‡Œv=%d\n•½‹Ï=%d\n", sum, sum / i);
}