#include<Stdio.h>
main()
{
	int su, sum = 0, i = 0, cnt;
	printf("����?");
	cnt = scanf("%d", &su);
	while (cnt != EOF)
	{
		sum += su;
		i++;
		printf("����?");
		cnt = scanf("%d", &su);
	}
	printf("���v=%d\n����=%d\n", sum, sum / i);
}