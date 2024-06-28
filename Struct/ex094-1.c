#include<stdio.h>
#include<string.h>
#define nin 5
struct day { int nen; int tuki; int hi; };
struct profile { char name[20]; struct day data ; char blood[5]; };
main()
{
	struct profile data[nin] = { {"haru",2000,1,2,"A"},
								 {"natu",2001,2,3,"B"},
								 {"aki",2002,2,4,"AB"},
								 {"huyu",2003,3,4,"O"},
								 {"siki",2004,5,6,"A"} };
	struct profile* p;
	int i;
	for (i = 0,p=data; i < nin; i++, p++)
	{
		if (p->data.tuki==2)
		{
			printf(" %s-- %d ”N %d ŒŽ %d “ú¶ ŒŒ‰tŒ^ - %s Œ^\n",
				p->name, p->data.nen, p->data.tuki, p->data.hi, p->blood);
		}
	}
}