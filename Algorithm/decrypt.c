#include<stdio.h>
main()
{
	int i;
	char s[100];
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]--;
	}
	printf("•œ†Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}