#include<stdio.h>
#include<string.h>
#define nin 5
struct profile { char name[20]; int birth[3]; char blood[5]; };
main()
{
	struct profile data[nin];
	struct profile* p = data;
	int i;
	for (i = 0; i < nin; i++,p++)
	{
		printf("%dl–Ú(–¼‘O):", i + 1);
		scanf("%s", p->name);
		printf("%dl–Ú(¶”NŒŽ“ú):", i + 1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%dl–Ú(ŒŒ‰tŒ^):", i + 1);
		scanf("%s", p->blood);
	}
	printf("\n\n");
	p = data;
	for (i = 0; i < nin; i++,p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf(" % s-- % d ”N % d ŒŽ % d “ú¶ ŒŒ‰tŒ^ - % s Œ^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}