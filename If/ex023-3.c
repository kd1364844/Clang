#include<stdio.h>
main()
{
	int en;
	int a, b;
	printf("演算子を入力:");
	    scanf("%d", &en);
		printf("２つの整数を入力:");
		scanf("%d%d", &a, &b);
		if (en == 1)
		{
			printf("%d\n", a + b);
		}
		else
		{
			if (en == 2)
			{
				printf("%d\n", a - b);
			}
			else
			{
				if (en == 3)
				{
					printf("%d\n", a * b);
				}
				else
				{
					if (en == 4)
					{
						printf("%d\n", a / b);
					}
					else
					{
						printf("エラー\n");
					}
				}

			}
		}
}