#include<stdio.h>
main()
{
	char col[10];
	int cnt,i;
	printf("•¶š—ñH");
	cnt = scanf("%s", col);
	while (cnt != EOF)
	{
		for (i = 0; col[i] != '\0'; i++);
		for (; i >= 0; i--)
		{
			printf("%c", col[i]);
		}
		printf("\n•¶š—ñH");
		cnt = scanf("%s", col);
	}
}