#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[20];
	int i,n, k[20];
	printf("文字列を入力してください>");
	scanf("%s", &s[0]);
	srand(time(0));
	for (i = 0; s[i] != '\0'; i++)
	{
		rand();
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
	printf("暗号化文字列は、%s\n", &s[0]);
	printf("暗号キーは、");
	for (n = 0; n != i; n++)
	{
		printf("%d", k[n]);
	}
}