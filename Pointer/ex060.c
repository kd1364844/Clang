#include<stdio.h>
main()
{
	char data[10] = "Language";
	char* p_data;
	char ken;
	int i;
	p_data = data;
	printf("data[]=%s\n", data);
	printf("検索文字は？");
	scanf("%c", &ken);
	printf("検索結果は、");
	for (i = 0; *(p_data + i) != '\0'; i++)
	{
		if (ken != *(p_data + i))
		{
			continue;
		}
		printf(" %d", i + 1);
	}
	printf("文字目です\n");
}