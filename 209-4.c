#include<stdio.h>
int main()
{
	int a, b, c, t, r;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		t = b;
		b = a;
		a = t;
	}
	if(a<c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (b < c)
	{
		t = c;
		c = b;
		b = t;
	}
	r = a * 100 + b * 10 + c;
	printf("%d", r);
	return 0;
}