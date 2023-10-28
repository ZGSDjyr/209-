#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("请输入两个数字:\n");
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		c = b;
		b = a;
		a = c;
	}
	d = a % b;
	int n = a * b;
	while (d != 0)
	{
		a = b;
		b = d;
		d = a % b;
	}
	printf("这两个数的最大公因数是%d", b);
	return 0;
}