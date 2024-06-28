#include<stdio.h>
int atai(char c);
main()
{
	char c;
	int watasi;
	printf("アルファベット1文字？");
	scanf("%c", &c);
	watasi = atai(c);
	if (watasi == 1)
	{
		printf("戻り値は、 %d なので入力した文字は、大文字です\n", watasi);
	}
	else
	{
		printf("戻り値は、 %d なので入力した文字は、小文字です\n", watasi);
	}
}
int atai(char c)
{
	int ans;
	if ('A' <= c && 'Z' >= c)
	{
		ans = 1;
	}
	else
	{
		ans = 0;
	}
	return(ans);
}