#include<stdio.h>
main()
{
	float box[3], kei;
	int i;
	kei = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		kei += box[i];
	}
	printf("���v��%.2f�ł�\n���ς�%.2f�ł�\n", kei, kei / 3);
}