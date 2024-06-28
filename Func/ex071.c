#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, kei;
	float hei;
	printf("®”‚ğ‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	kei = gokei(a, b, c);
	hei = heikin(a, b, c);
	printf("‡Œv‚Í %d,•½‹Ï‚Í %.2f", kei, hei);
}
int gokei(int a, int b, int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}
float heikin(int a, int b, int c)
{
	float ans;
	ans = (a + b + c) / 3.0;
	return(ans);
}