#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* p_data = data;
	int i, max, min;
	printf("�z��̓��e\ndata[]=");
	for (i = 0; i < 9; i++)
	{
		printf(" %d,", p_data[i]);
	}
	max = *p_data;
	for (i = 1; i < 9; i++)
	{
		if (max < p_data[i])
		{
			max = p_data[i];
		}
	}
	printf("\n�ő�l = %d\n", max);
	min = *p_data;
	for (i = 1; i < 9; i++)
	{
		if (min > p_data[i])
		{
			min = p_data[i];
		}
	}
	printf("�ŏ��l = %d\n", min);
}