#include<stdio.h>
main()
{
	char date[6] = { "Apple" };
	int i = 0;
	printf("1�������\��\n");
    while(date[i]!='\0')
	{
		printf("%c", date[i]);
		i++;
	}
	printf("\n������ŕ\��\n%s",&date[0]);
}