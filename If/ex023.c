#include<stdio.h>
main()
{
	int byou,ji,hun,su;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &byou);
	ji = byou / 3600;
	hun = (byou - ji * 3600)/60;
	su = byou - (ji * 3600 + hun * 60);
	if (byou > 5000) {
		printf("ƒGƒ‰[\n");
	}
	else {
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", ji, hun, su);
	}
}