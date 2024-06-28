#include <stdio.h>

#define DATA_END -1
#define MAX_SIZE 10

//�v���^�C�v�錾
void display_list(struct ken* data);
void add_list(struct ken* data);
void del_list(struct ken* data);

//�\���̂̒�`
struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken ken_data[MAX_SIZE] = { 
		{ 1, "�k�C��", NULL },
		{ 2, "�X��", NULL },
		{ 3, "��茧", NULL },
		{ 4, "�{�錧", NULL },
		{ 5, "�H�c��", NULL },
		{ 6, "�R�`��", NULL },
		{ 7, "������", NULL },
		{ DATA_END, "", NULL }
	};
	struct ken *p, *wp;
	int no;

	// �����̃����N�ݒ�
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//���j���[����
	printf("������I��ł�������\n");
	printf("1�F�\���@2�F�ǉ��@3�F�폜�@9�F�I��\n");
	printf("�����ԍ�����́F");
	scanf("%d", &no);
	
	while (no != 9) {
		switch (no) {
		case 1:
			//���X�g�̕\��
			display_list(ken_data);
			break;
		case 2:
			//���X�g�ւ̒ǉ�
			add_list(ken_data);
			break;
		case 3:
			//���X�g����̍폜
			del_list(ken_data);
			break;
		default:
			printf("�G���[�F1�`3�܂���9����͂��Ă�������\n");
		}
		
		printf("\n\n������I��ł�������\n");
		printf("1�F�\���@2�F�ǉ��@3�F�폜�@9�F�I��\n");
		printf("�����ԍ�����́F");
		scanf("%d", &no);
	}	
}

//���X�g�̕\��
void display_list(struct ken* data)
{
	struct ken *p;
	int no;

	printf("\n-----------------------------------\n");
	printf("���X�g�̕\��\n");
	printf("-----------------------------------\n");
	for (no=1,p = data; p->code != DATA_END; p = p->next,no++) {
		printf("%2d : code = %d name = %s\n",no, p->code, p->name);
	}
	printf("-----------------------------------\n");
}


//���X�g�ւ̒ǉ��i�������A�P�Ԗځi�擪�j�ɂ͒ǉ��ł��Ȃ��j
void add_list(struct ken* data)
{
	struct ken *p,*wp;
	int check[MAX_SIZE] = {0}, cnt, list_num, add_no;


	printf("\n-----------------------------------\n");
	printf("���X�g�ւ̒ǉ�\n");
	printf("�� �P�Ԗځi�擪�j�ɂ͒ǉ��ł��܂���\n");
	printf("-----------------------------------\n");

	//���X�g�̃f�[�^�����擾
	for (cnt = 1, p = data; p->code != DATA_END; p = p->next) {
		cnt++;
	}

	//���X�g��ǉ����関�g�p�̈悪�Ȃ��̂ŃG���[
	if (cnt == MAX_SIZE) {
		printf("\n�G���[�F����ȏナ�X�g�Ƀf�[�^��ǉ��ł��܂���\n");
		return;
	}

	//���X�g�֒ǉ�����ʒu�����
	while (1) {
		printf("\n�ǉ�����ʒu�u2�`%d�v����́F",cnt);
		scanf("%d", &list_num);

		if (list_num >= 2 && list_num <= cnt) {
			break;
		}
		else {
			printf("\n�G���[�F�u2�`%d�v�͈̔͂œ��͂��Ă�������\n",cnt);
		}
	}

	//���g�p�̈悩�g�p�̈悩���`�F�b�N
	//���up - data�v�̓A�h���X�i�|�C���^�j�̈����Z�̂��ߒ��ӁI
	for (p = data; p->code != DATA_END; p = p->next) {
		check[p - data] = 1;
	}
	check[p - data] = 1;

	//���X�g��ǉ����関�g�p�̈��T��
	for (add_no = 0; add_no < MAX_SIZE; add_no++) {
		if (check[add_no] == 0) {
			break;
		}
	}

	//�ǉ�����f�[�^�̓���
	printf("code����́F");
	scanf("%d", &data[add_no].code);
	printf("name����́F");
	scanf("%s", data[add_no].name);
	
	//���X�g�ւ̃f�[�^�̒ǉ�����
	for ( cnt = 1, p = data; cnt < list_num; p = p->next,cnt++) {
		wp = p;
	}
	data[add_no].next = wp->next;
	wp->next = &data[add_no];
	
	printf("\n%2d�ԖڂɁucode�F%d�v�uname�F%s�v��ǉ����܂���\n", list_num, data[add_no].code, data[add_no].name);
}


//���X�g����̍폜�i�������A�P�Ԗځi�擪�j�͍폜�ł��Ȃ��j
void del_list(struct ken* data)
{
	struct ken* p, * wp;
	int cnt, list_num;


	printf("\n-----------------------------------\n");
	printf("���X�g����̍폜\n");
	printf("�� �P�Ԗځi�擪�j�̃f�[�^�͍폜�ł��Ȃ�\n");
	printf("-----------------------------------\n");

	//���X�g�̃f�[�^�����擾
	for (cnt = 1, p = data; p->code != DATA_END; p = p->next) {
		cnt++;
	}

	if (cnt == 2) {
		printf("\n�G���[�F����ȏナ�X�g����f�[�^���폜�ł��܂���\n");
		return;
	}

	//�폜���郊�X�g�ʒu�����
	while (1) {
		printf("\n�폜����ʒu�u2�`%d�v����́F", cnt-1);
		scanf("%d", &list_num);

		if (list_num >= 2 && list_num <= cnt-1) {
			break;
		}
		else {
			printf("\n�G���[�F�u2�`%d�v�͈̔͂œ��͂��Ă�������\n", cnt-1);
		}
	}

	//���X�g����̃f�[�^�폜
	for (cnt = 1, p = data; cnt < list_num; p = p->next, cnt++) {
		wp = p;
	}
	wp->next = p->next;

	printf("\n%2d�Ԗڂ́ucode�F%d�v�uname�F%s�v���폜���܂���\n", list_num, p->code, p->name);
}
