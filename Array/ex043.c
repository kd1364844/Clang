#include<stdio.h>
main()
{
	int i = 0, cnt = 0;
	char date[] = "orange";
	while (date[i] != '\0')
	{
		cnt++;
		i++;
	}
	printf("文字列:%s\n", &date[0]);
	printf("文字数は%d文字", cnt);
}