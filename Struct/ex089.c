#include<stdio.h>
struct profile { char name[20]; int birt[3]; char blood[5]; };
main()
{
	struct profile data;
	printf("���O�����:");
	scanf("%s", &data.name[0]);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &data.birt[0], &data.birt[1], &data.birt[2]);
	printf("���t�^�����:");
	scanf("%s", data.blood);
	printf("%s -- %d�N%d��%d���� ���t�^-%s\n", data.name, data.birt[0], data.birt[1], data.birt[2], data.blood);
}