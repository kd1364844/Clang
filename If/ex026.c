#include<stdio.h>
main()
{
	int tuki, seireki;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &seireki);
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &tuki);
	if (tuki == 2)
	{
		if (seireki % 100 != 0 && seireki % 400 == 0)
		{
			printf("ÅI“ú‚Í‚Q‚X“ú‚Å‚·\n");
		}
		else
		{
			if (seireki % 4 == 0)
			{
				printf("ÅI“ú‚Í‚Q‚X“ú‚Å‚·\n");
			}
		}
	}
	else
	{
		if (tuki == 4 || tuki == 6 || tuki == 9 || tuki == 11)
		{
			printf("ÅI“ú‚Í‚R‚O“ú‚Å‚·\n");
		}
		else
		{
			printf("ÅI“ú‚Í‚R‚P“ú‚Å‚·\n");
		}
	}
}