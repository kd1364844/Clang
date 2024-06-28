#include<stdio.h>
#define week 7
main()
{
	char* day[] = { "Sunday","Manday","Tuesday","Wendnesday","Thursday","Friday","Saturday",NULL };
	char** p = day;
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("%s\n", day[i]);
	}
	for (i = 0; i < 7; i++)
	{
		printf("%s\n", *(p + i));
	}
	while (*p)
	{
		printf("%s\n", *p++);
	}
}