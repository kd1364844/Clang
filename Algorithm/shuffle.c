#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, target, work, data[20];
	printf("入れ替え前\n-----------------\n");
	for (i = 0; i < 20; i++)
	{
		data[i] = 1 + i;
		printf("data[%2d]=%2d\n", i, data[i]);
	}
	printf("入れ替え後\n-----------------\n");
	/*srand(time(0));
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}*/
	srand(time(0));
	for (i = 19; i > 0; i--)
	{
		target = rand() % i;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}

	for (i = 0; i < 20; i++)
	{
		printf("data[%2d]=%2d\n", i, data[i]);
	}
}