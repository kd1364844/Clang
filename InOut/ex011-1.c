#include<stdio.h>
main()
{
	char moji;
	moji = 'A';
	printf("A:%d 0x%x   B:%d 0x%x\n", moji, moji, moji + 1, moji + 1);
	printf("C:%d 0x%x   a:%d 0x%x\n", moji + 2, moji + 2, moji + 32, moji + 32);
	printf("b:%d 0x%x   c:%d 0x%x\n", moji + 33, moji + 33, moji + 34, moji + 34);
	printf("0:%d 0x%x   1:%d 0x%x\n", moji - 17, moji - 17, moji - 16, moji - 16);
	printf("2:%d 0x%x    :%d 0x%x\n", moji - 15, moji - 15, moji - 33, moji - 33);
}