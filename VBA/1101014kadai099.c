#include<stdio.h>
main()
{
	char hai[100];
	int cnt,i;
	printf("回数と文字列を入力");
	scanf("%d%s", &cnt, hai);
	for (i = 0; i < cnt; i++)
	{
		printf("%s\t", hai);
	}
}