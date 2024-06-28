#include<stdio.h>
int tbl_max(int* p);
int tbl_min(int* p);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l = %d\n", tbl_max(data));
	printf("Å¬’l = %d\n", tbl_min(data));
}
int tbl_max(int* p)
{
	int max = *p, i;
	for (i = 1; i < 8; i++)
	{
		if (max < *(p + i))
		{
			max = *(p + i);
		}
	}
	return (max);
}
int tbl_min(int* p)
{
	int min = *p, i;
	for (i = 1; i < 8; i++)
	{
		if (min > *(p + i))
		{
			min = *(p + i);
		}
	}
	return (min);
}