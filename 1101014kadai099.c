#include<stdio.h>
main()
{
	char hai[100];
	int cnt,i;
	printf("�񐔂ƕ���������");
	scanf("%d%s", &cnt, hai);
	for (i = 0; i < cnt; i++)
	{
		printf("%s\t", hai);
	}
}