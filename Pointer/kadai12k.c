#include<stdio.h>
main()
{
	char data[30] = "mikan to ringo";
	char* p_data;
	char ken = ' ';
	int i;
	p_data = data;
	for (i = 0; *(p_data + i) != '\0'; i++)
	{
		if (ken == *(p_data + i))
		{
			continue;
		}
		printf("%c", *(p_data + i));
	}
}