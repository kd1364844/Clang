#include<stdio.h>
main()
{
	char col[10];
	int cnt;
	printf("������H");
	cnt = scanf("%s", col);
	while (cnt != EOF)
	{
		printf("%s\n", col);
		printf("������H");
		cnt = scanf("%s", col);
	}
}