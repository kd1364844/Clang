#include<stdio.h>
main()
{
	int i;
	printf("”‚ÍH");
	scanf("%d", &i);
	if (i > 0)
	{
		do
		{
			printf("*****\n");
			i--;
		} while (i > 0);
	}
	else
	{
		printf("ƒGƒ‰[\n");
	}
}