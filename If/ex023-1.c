#include<stdio.h>
main()
{
	int byou, ji, hun, su;
	printf("秒数を入力:");
	scanf("%d", &byou);
	ji = byou / 3600;
	hun = (byou - ji * 3600) / 60;
	su = byou - (ji * 3600 + hun * 60);
	if (byou > 5000) {
		printf("エラー\n");
	}
	else if (byou < 0)
	{
		printf("エラー\n");
	}
	else {
		printf("%d時間%d分%d秒です\n", ji, hun, su);
	}
}