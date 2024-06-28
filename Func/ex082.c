#include<stdio.h>
#include<string.h>
void koujun(int *k);
void syojun(int *s);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char sort[10];
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í:");
	scanf("%s", sort);
	if (strcmp(sort, "~‡") == 0)
	{
		koujun(data);
	}
	else
	{
		syojun(data);
	}
	for(int i=0;i<8;i++)
	{
		printf("%d ", data[i]);
	}
}
void koujun(int* k)
{
	int i, j, w;
	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			if (*(k + i) < *(k + j))
			{
				w = *(k + i);
				*(k + i) = *(k + j);
				*(k + j) = w;
			}
		}
	}
}
void syojun(int* s)
{
	int i, j, w;
	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			if (*(s + i) > *(s + j))
			{
				w = *(s + i);
				*(s + i) = *(s + j);
				*(s + j) = w;
			}
		}
	}
}