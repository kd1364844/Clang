#include<stdio.h>
main()
{
	char s[20];
	int i,n;
	printf("文字列を入力してください>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の復号キー>",i);
		scanf("%d", &n);
		s[i] -= n;
	}
	printf("復号済み文字列は、%s\n", &s[0]);
}