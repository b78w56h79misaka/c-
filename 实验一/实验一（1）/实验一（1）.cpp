#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void max(int x[10])
{
	int i=0,max;
	for(;i<9;i++)
	{
		if (x[i] > x[i + 1])
		{
			max = x[i];
			x[i + 1]=x[i];
		}
		else
		{
			max = x[i + 1];
		}
	}
	printf("\nMax=%d", max);
}
void min(int x[10])
{
	int j = 0, min;
	for (; j < 9; j++)
	{
		if (x[j] < x[j + 1])
		{
			x[j + 1] = x[j];
			min = x[j];
		}
		else
			min = x[j + 1];
	}
	printf("\nMin=%d", min);
}
void f(int x[10])
{
	int a=0, i=0;
	for (; i < 10; i++)
		a = a + x[i];
	printf("\n平均值=%d\n总和=%d", a/10, a);
}
int main()
{
	srand((unsigned int)time(NULL));
	int sum[10],num[10];
	int i=0;
	for (; i < 10; i++)
		sum[i] = rand() % 90 + 10;
	for (i=0; i < 10; i++)
	    printf("%d  ", sum[i]);
	for (i = 0; i < 10; i++)
		num [i] = sum[i];
	max(num);
	for (i = 0; i < 10; i++)
		num[i] = sum[i];
	min(num);
	for (i = 0; i < 10; i++)
		num[i] = sum[i];
	f(num);
	return 0;
}
