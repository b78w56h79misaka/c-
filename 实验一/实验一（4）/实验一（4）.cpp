#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = { "I am an undergraduate student from the Faculty of Information Engineering and Automation at Kunming University of Science and Technology" };
	int b = 0,num=0;
	int z = strlen(a);
	
	for (; b < z; b++)
		if (a[b] ==' ')
		{
			num++;
		}
	printf("%d",num+1);
	return 0;
}