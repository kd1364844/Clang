#include<stdio.h>
void renketu(char* p_a, char* p_b);
main()
{
	char a[50], b[50];
	printf("”z—ña:");
	scanf("%s", &a);
	printf("”z—ñb:");
	scanf("%s", &b);
	renketu(a, b);
	printf("”z—ña:%s\n", a);
}
void renketu(char* p_a, char* p_b)
{
	int i,j;
	for (i = 0; *(p_a + i) != '\0'; i++);
	for (j = 0; *(p_a + i) = *(p_b + j); i++, j++);
	*(p_a + i) = '\0';
}