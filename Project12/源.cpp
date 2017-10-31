#include <stdio.h>
int main()
{
	void MAX(int a, int b, int c);
	void MIN(int a, int b, int c);
	int a, b, c;
	int n;
	printf("请输入三个数字\n");
	scanf_s("%d%d%d", &a, &b, &c);
	label_1:printf("1为从大到小，2为从小到大\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:MAX(a, b, c);
		break;
	case 2:MIN(a, b, c);
		break;
	default:printf("错误，重新输入\n"); goto label_1;
	}
	return 0;
}

void MAX(int a, int b, int c)
{
	if (b > a)
	{
		int t;
		t = b;
		b = a;
		a = t;
	}
	if (c > a)
	{
		int t = 0;
		t = c;
		c = a;
		a = t;
	}
	if (c > b)
	{
		int t = 0;
		t = c;
		c = b;
		b = t;
	}
	printf("%d,%d,%d", a, b, c);

}

void MIN(int a, int b, int c)
{
	int t;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d,%d,%d", a, b, c);
}