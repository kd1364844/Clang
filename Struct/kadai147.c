#include<stdio.h>
struct animal 
{
	int no;
	char name[20];
	char color[10];
};
main()
{
	struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} }, * p_data = data;
}