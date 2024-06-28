#include<Stdio.h>
main()
{
	int c;
	char dumy[250];
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();
	}
}