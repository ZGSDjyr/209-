#include<stdio.h>
int main()
{
#define len 10
	int b[len];
	int i, j, m, temp;
	printf("请输入10个整数：");
	for (i = 0; i < len; i++)
		scanf_s("%d,", &b[i]);
	for (i = 0; i < len - 1; i++)
	{
		m = i;
		for (j = i + 1; j < len; j++)
			if (b[j] < b[m])
				m = j;
		if (m != i)
		{
			temp = b[i];
			b[i] = b[m];
			b[m] = temp;
		}
	}
	printf("排序结果:");
	for (j = 0; j < len; j++)
		printf("%d,", b[j]);
	printf("\n");
}
