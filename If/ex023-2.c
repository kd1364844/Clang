#include<stdio.h>
main()
{
	int seireki;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &seireki);
	if (seireki % 100 != 0 && seireki % 400 == 0)
	{
		printf("‚¤‚é‚¤”N‚Å‚·\n");
	}
	else
	{
		if (seireki % 4 == 0)
		{
			printf("‚¤‚é‚¤”N‚Å‚·\n");
		}
		else
		{
			printf("‚¤‚é‚¤”N‚Å‚Í‚È‚¢‚Å‚·\n");
		}
	}
}
