#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í");
	scanf("%c", &moji);
	if (moji >= 'a' && moji <= 'z')
	{
		printf("•ÏŠ·‚·‚é‚Æ%c\n", moji - 32);
	}
	else
	{
		if (moji >= 'A' && moji <= 'Z')
		{
			printf("•ÏŠ·‚·‚é‚Æ%c\n", moji + 32);
		}
		else
		{
			printf("ƒGƒ‰[\n");
		}
	}
}