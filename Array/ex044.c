#include<stdio.h>
main()
{
	char moji1[90], moji2[90], hozon[90];
	int i;
	printf("•¶Žš—ñ‚P‚ð“ü—Í:");
	scanf("%s",moji1);
	printf("•¶Žš—ñ‚Q‚ð“ü—Í:");
	scanf("%s", moji2);
	printf("\nmoji1=%s\tmoji2=%s\n“ü‚ê‘Ö‚¦‚é‚Æ\n", moji1, moji2);
	for (i = 0; moji1[i]!='\0'; i++)
	{
		hozon[i] = moji1[i];
	}
	hozon[i] = '\0';
	for (i = 0; moji2[i] != '\0'; i++)
	{
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';
	for (i = 0; hozon[i] != '\0'; i++)
	{
		moji2[i] = hozon[i];
	}
	moji2[i] = '\0';
	printf("moji1=%s\tmoji2=%s\n", moji1, moji2);
}