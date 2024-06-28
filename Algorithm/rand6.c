#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pla, com;
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &pla);
	srand(time(0));
	rand();
	com = (rand() % 3) + 1;
	if (pla == 1)
	{
		printf("\nプレイヤーは、グーです。\n");
		if (com == 1)
		{
			printf("コンピューターは、グーです。\n");
			printf("あいこです\n");
		}
		else if (com == 2)
		{
			printf("コンピューターは、チョキです。\n");
			printf("プレイヤーの勝ちです\n");
		}
		else
		{
			printf("コンピューターは、パーです。\n");
			printf("プレイヤーの負けです\n");
		}
	}
	else if (pla == 2)
	{
		printf("\nプレイヤーは、チョキです。\n");
		if (com == 1)
		{
			printf("コンピューターは、グーです。\n");
			printf("プレイヤーの負けです\n");
		}
		else if (com == 2)
		{
			printf("コンピューターは、チョキです。\n");
			printf("あいこです\n");
		}
		else
		{
			printf("コンピューターは、パーです。\n");
			printf("プレイヤーの勝ちです\n");
		}
	}
	else
	{
		printf("\nプレイヤーは、パーです。\n");
		if (com == 1)
		{
			printf("コンピューターは、グーです。\n");
			printf("プレイヤーの勝ちです\n");
		}
		else if (com == 2)
		{
			printf("コンピューターは、チョキです。\n");
			printf("プレイヤーの負けです\n");
		}
		else
		{
			printf("コンピューターは、パーです。\n");
			printf("あいこです\n");
		}
	}
}