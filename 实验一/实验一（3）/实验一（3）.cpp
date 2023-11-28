#include<stdio.h>
int main()
{
	int j, l,t;
	int a[2][3] = { { 32,52,63 }, {12, 54, 65} };
	int b[3][3];

	for (j = 0; j < 3; j++)
	{
		for (l = 0; l < 3; l++)
		{
			b[l][j] = a[j][l];
		}

	}
	for (j = 0; j < 3; j++)
	{
		for (l = 0; l < 2; l++)
			printf("%d ", b[j][l]);
		printf("\n");
	}

	return 0;
}