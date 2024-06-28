#include<stdio.h>
main()
{
	char a[100];
	char* c;
	printf("•¶Žš—ñ“ü—Í>");
	c = gets(a);
	while (c != NULL)
	{
		printf("“ü—Í‚³‚ê‚½‚Ì‚Í%s\n", c);
		printf("•¶Žš—ñ“ü—Í>");
		c = gets(a);
	}

}