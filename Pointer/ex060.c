#include<stdio.h>
main()
{
	char data[10] = "Language";
	char* p_data;
	char ken;
	int i;
	p_data = data;
	printf("data[]=%s\n", data);
	printf("���������́H");
	scanf("%c", &ken);
	printf("�������ʂ́A");
	for (i = 0; *(p_data + i) != '\0'; i++)
	{
		if (ken != *(p_data + i))
		{
			continue;
		}
		printf(" %d", i + 1);
	}
	printf("�����ڂł�\n");
}