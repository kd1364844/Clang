#include<stdio.h>
int atai(char c);
main()
{
	char c;
	int watasi;
	printf("�A���t�@�x�b�g1�����H");
	scanf("%c", &c);
	watasi = atai(c);
	if (watasi == 1)
	{
		printf("�߂�l�́A %d �Ȃ̂œ��͂��������́A�啶���ł�\n", watasi);
	}
	else
	{
		printf("�߂�l�́A %d �Ȃ̂œ��͂��������́A�������ł�\n", watasi);
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