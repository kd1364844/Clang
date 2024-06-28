#include<stdio.h>
main()
{
	char col[10];
	int cnt;
	printf("•¶š—ñH");
	cnt = scanf("%s", col);
	while (cnt != EOF)
	{
		printf("%s\n", col);
		printf("•¶š—ñH");
		cnt = scanf("%s", col);
	}
}