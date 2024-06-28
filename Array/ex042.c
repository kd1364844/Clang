#include<stdio.h>
main()
{
	char date[6] = { "Apple" };
	int i = 0;
	printf("1•¶Žš‚¸‚Â•\Ž¦\n");
    while(date[i]!='\0')
	{
		printf("%c", date[i]);
		i++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n%s",&date[0]);
}