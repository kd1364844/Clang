#include<stdio.h>
#include<stdlib.h> //�������g���Ƃ��ɕK�v
#include<time.h>   //�������g���Ƃ��ɕK�v
main()
{
	int kazu;
	srand(time(0));   //�����̏�����
	kazu = rand();    //0�`32767�͈̔͂ŗ����@
	printf("��������������%d�ł�\n", kazu);
}