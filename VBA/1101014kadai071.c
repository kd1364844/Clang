#include<stdio.h>
main()
{
	int su1, su2;
	char en;
	printf("‰‰ZqH");
	scanf("%c", &en);
	printf("®”‚PH");
	scanf("%d", &su1);
	printf("®”‚QH");
	scanf("%d", &su2);
	switch (en)
	{
	case'+':printf("%d %c %d = %d\n", su1, en, su2, su1 + su2); break;
	case'-':printf("%d %c %d = %d\n", su1, en, su2, su1 - su2); break;
	case'*':printf("%d %c %d = %d\n", su1, en, su2, su1 * su2); break;
	case'/':printf("%d %c %d = %d\n", su1, en, su2, su1 / su2); break;
	case'%':printf("%d %c %d = %d\n", su1, en, su2, su1 % su2); break;
	}
}