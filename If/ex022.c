#include<stdio.h>
main()
{
	int seireki;
	printf("西暦を入力");
	scanf("%d", &seireki);
	if (seireki < 1989) {
		printf("昭和生まれです\n");
	}
	else {
		printf("平成生まれです\n");
	}
}