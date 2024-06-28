#include <stdio.h>

#define DATA_END -1
#define MAX_SIZE 10

//プロタイプ宣言
void display_list(struct ken* data);
void add_list(struct ken* data);
void del_list(struct ken* data);

//構造体の定義
struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken ken_data[MAX_SIZE] = { 
		{ 1, "北海道", NULL },
		{ 2, "青森県", NULL },
		{ 3, "岩手県", NULL },
		{ 4, "宮城県", NULL },
		{ 5, "秋田県", NULL },
		{ 6, "山形県", NULL },
		{ 7, "福島県", NULL },
		{ DATA_END, "", NULL }
	};
	struct ken *p, *wp;
	int no;

	// 初期のリンク設定
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//メニュー処理
	printf("処理を選んでください\n");
	printf("1：表示　2：追加　3：削除　9：終了\n");
	printf("処理番号を入力：");
	scanf("%d", &no);
	
	while (no != 9) {
		switch (no) {
		case 1:
			//リストの表示
			display_list(ken_data);
			break;
		case 2:
			//リストへの追加
			add_list(ken_data);
			break;
		case 3:
			//リストからの削除
			del_list(ken_data);
			break;
		default:
			printf("エラー：1～3または9を入力してください\n");
		}
		
		printf("\n\n処理を選んでください\n");
		printf("1：表示　2：追加　3：削除　9：終了\n");
		printf("処理番号を入力：");
		scanf("%d", &no);
	}	
}

//リストの表示
void display_list(struct ken* data)
{
	struct ken *p;
	int no;

	printf("\n-----------------------------------\n");
	printf("リストの表示\n");
	printf("-----------------------------------\n");
	for (no=1,p = data; p->code != DATA_END; p = p->next,no++) {
		printf("%2d : code = %d name = %s\n",no, p->code, p->name);
	}
	printf("-----------------------------------\n");
}


//リストへの追加（ただし、１番目（先頭）には追加できない）
void add_list(struct ken* data)
{
	struct ken *p,*wp;
	int check[MAX_SIZE] = {0}, cnt, list_num, add_no;


	printf("\n-----------------------------------\n");
	printf("リストへの追加\n");
	printf("※ １番目（先頭）には追加できません\n");
	printf("-----------------------------------\n");

	//リストのデータ数を取得
	for (cnt = 1, p = data; p->code != DATA_END; p = p->next) {
		cnt++;
	}

	//リストを追加する未使用領域がないのでエラー
	if (cnt == MAX_SIZE) {
		printf("\nエラー：これ以上リストにデータを追加できません\n");
		return;
	}

	//リストへ追加する位置を入力
	while (1) {
		printf("\n追加する位置「2～%d」を入力：",cnt);
		scanf("%d", &list_num);

		if (list_num >= 2 && list_num <= cnt) {
			break;
		}
		else {
			printf("\nエラー：「2～%d」の範囲で入力してください\n",cnt);
		}
	}

	//未使用領域か使用領域かをチェック
	//※「p - data」はアドレス（ポインタ）の引き算のため注意！
	for (p = data; p->code != DATA_END; p = p->next) {
		check[p - data] = 1;
	}
	check[p - data] = 1;

	//リストを追加する未使用領域を探す
	for (add_no = 0; add_no < MAX_SIZE; add_no++) {
		if (check[add_no] == 0) {
			break;
		}
	}

	//追加するデータの入力
	printf("codeを入力：");
	scanf("%d", &data[add_no].code);
	printf("nameを入力：");
	scanf("%s", data[add_no].name);
	
	//リストへのデータの追加処理
	for ( cnt = 1, p = data; cnt < list_num; p = p->next,cnt++) {
		wp = p;
	}
	data[add_no].next = wp->next;
	wp->next = &data[add_no];
	
	printf("\n%2d番目に「code：%d」「name：%s」を追加しました\n", list_num, data[add_no].code, data[add_no].name);
}


//リストからの削除（ただし、１番目（先頭）は削除できない）
void del_list(struct ken* data)
{
	struct ken* p, * wp;
	int cnt, list_num;


	printf("\n-----------------------------------\n");
	printf("リストからの削除\n");
	printf("※ １番目（先頭）のデータは削除できない\n");
	printf("-----------------------------------\n");

	//リストのデータ数を取得
	for (cnt = 1, p = data; p->code != DATA_END; p = p->next) {
		cnt++;
	}

	if (cnt == 2) {
		printf("\nエラー：これ以上リストからデータを削除できません\n");
		return;
	}

	//削除するリスト位置を入力
	while (1) {
		printf("\n削除する位置「2～%d」を入力：", cnt-1);
		scanf("%d", &list_num);

		if (list_num >= 2 && list_num <= cnt-1) {
			break;
		}
		else {
			printf("\nエラー：「2～%d」の範囲で入力してください\n", cnt-1);
		}
	}

	//リストからのデータ削除
	for (cnt = 1, p = data; cnt < list_num; p = p->next, cnt++) {
		wp = p;
	}
	wp->next = p->next;

	printf("\n%2d番目の「code：%d」「name：%s」を削除しました\n", list_num, p->code, p->name);
}
