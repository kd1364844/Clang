#include<stdio.h>
struct profile { char name[20]; int birt[3]; char blood[5]; };
main()
{
	struct profile data;
	printf("名前を入力:");
	scanf("%s", &data.name[0]);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &data.birt[0], &data.birt[1], &data.birt[2]);
	printf("血液型を入力:");
	scanf("%s", data.blood);
	printf("%s -- %d年%d月%d日生 血液型-%s\n", data.name, data.birt[0], data.birt[1], data.birt[2], data.blood);
}