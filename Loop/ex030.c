#include<stdio.h>
main()
{
	int su, kazu;
	kazu = 0;
	printf("��������:");
	scanf("%d", &su);
	while (10>=kazu)
	{
		printf("%d+%d=%d\n", su, kazu, su + kazu);
		kazu += 1;
	}
}