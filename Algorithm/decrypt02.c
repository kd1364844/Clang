#include<stdio.h>
main()
{
	char s[20];
	int i,n;
	printf("���������͂��Ă�������>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̕����L�[>",i);
		scanf("%d", &n);
		s[i] -= n;
	}
	printf("�����ςݕ�����́A%s\n", &s[0]);
}