#include<stdio.h>
main()
{
	char date[6] = { "Apple" };
	int i = 0;
	printf("1文字ずつ表示\n");
    while(date[i]!='\0')
	{
		printf("%c", date[i]);
		i++;
	}
	printf("\n文字列で表示\n%s",&date[0]);
}