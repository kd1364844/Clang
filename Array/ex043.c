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
	printf("������:%s\n", &date[0]);
	printf("��������%d����", cnt);
}