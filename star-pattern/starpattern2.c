// Print the following star pattern. the number of lines in the pattern should be equal to the value entered by the user.
/*

*
**
***
**
*

*/

#include <stdio.h>
int main()
{
	int n;
	printf("enter the no of coloumns\n");
	scanf("%d", &n);
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n);
	}
	for (int i = n - (n / 2 + 1); i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n);
	}
	return 0;
}
