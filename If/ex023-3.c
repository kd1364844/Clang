#include<stdio.h>
main()
{
	int en;
	int a, b;
	printf("���Z�q�����:");
	    scanf("%d", &en);
		printf("�Q�̐��������:");
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
						printf("�G���[\n");
					}
				}

			}
		}
}