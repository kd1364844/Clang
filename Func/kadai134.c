#include<stdio.h>
main()
{
	char col[10];
	int cnt;
	printf("文字列？");
	cnt = scanf("%s", col);
	while (cnt != EOF)
	{
		printf("%s\n", col);
		printf("文字列？");
		cnt = scanf("%s", col);
	}
}