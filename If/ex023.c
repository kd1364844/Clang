#include<stdio.h>
main()
{
	int byou,ji,hun,su;
	printf("�b�������:");
	scanf("%d", &byou);
	ji = byou / 3600;
	hun = (byou - ji * 3600)/60;
	su = byou - (ji * 3600 + hun * 60);
	if (byou > 5000) {
		printf("�G���[\n");
	}
	else {
		printf("%d����%d��%d�b�ł�\n", ji, hun, su);
	}
}