#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pla, com;
	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)>");
	scanf("%d", &pla);
	srand(time(0));
	rand();
	com = (rand() % 3) + 1;
	if (pla == 1)
	{
		printf("\n�v���C���[�́A�O�[�ł��B\n");
		if (com == 1)
		{
			printf("�R���s���[�^�[�́A�O�[�ł��B\n");
			printf("�������ł�\n");
		}
		else if (com == 2)
		{
			printf("�R���s���[�^�[�́A�`���L�ł��B\n");
			printf("�v���C���[�̏����ł�\n");
		}
		else
		{
			printf("�R���s���[�^�[�́A�p�[�ł��B\n");
			printf("�v���C���[�̕����ł�\n");
		}
	}
	else if (pla == 2)
	{
		printf("\n�v���C���[�́A�`���L�ł��B\n");
		if (com == 1)
		{
			printf("�R���s���[�^�[�́A�O�[�ł��B\n");
			printf("�v���C���[�̕����ł�\n");
		}
		else if (com == 2)
		{
			printf("�R���s���[�^�[�́A�`���L�ł��B\n");
			printf("�������ł�\n");
		}
		else
		{
			printf("�R���s���[�^�[�́A�p�[�ł��B\n");
			printf("�v���C���[�̏����ł�\n");
		}
	}
	else
	{
		printf("\n�v���C���[�́A�p�[�ł��B\n");
		if (com == 1)
		{
			printf("�R���s���[�^�[�́A�O�[�ł��B\n");
			printf("�v���C���[�̏����ł�\n");
		}
		else if (com == 2)
		{
			printf("�R���s���[�^�[�́A�`���L�ł��B\n");
			printf("�v���C���[�̕����ł�\n");
		}
		else
		{
			printf("�R���s���[�^�[�́A�p�[�ł��B\n");
			printf("�������ł�\n");
		}
	}
}