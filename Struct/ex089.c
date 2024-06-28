#include<stdio.h>
struct profile { char name[20]; int birt[3]; char blood[5]; };
main()
{
	struct profile data;
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s", &data.name[0]);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &data.birt[0], &data.birt[1], &data.birt[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", data.blood);
	printf("%s -- %d”N%dŒ%d“ú¶ ŒŒ‰tŒ^-%s\n", data.name, data.birt[0], data.birt[1], data.birt[2], data.blood);
}