#include<stdio.h>
int main()
{
	int i;
	for (i=7; i>-1; i--)
	{
		char a = 0b10101010;
		a = a >> i;
		printf("%d", a & 0b00000001);
	}
	return 0;
}