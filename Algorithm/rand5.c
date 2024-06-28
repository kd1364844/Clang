#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int  i;
	srand(time(0));
	for (i = 0; i < 100; i++)
	{
		printf("%d\t", rand() % 300 + 1);
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
}