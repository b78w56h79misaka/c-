#include <stdio.h>
int main()
{
	int a[5] = { 23,46,52,12,58 };
	int b[5] = { 56,78,54,21,65 };
	int c[10];
	int i=0,j,t;
	for (; i < 5; i++)
		c[i] = a[i];
	for (; i < 10; i++)
		c[i] = b[i - 5];
	printf("a=");
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\nb=");
	for (i = 0; i < 5; i++)
		printf("%d ", b[i]);
	printf("\nc=");
	for (i=0; i < 10; i++)
		for (j = i + 1; j < 10; j++)
		{
			if (c[i] >c[j])
			{
				t = c[j];
				c[j] = c[i];
				c[i] = t;
			}
		}
	for (i = 0; i < 10; i++)
		printf("%d ", c[i]);
	return 0;

}