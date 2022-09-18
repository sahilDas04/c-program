// Print the following star pattern. the number of lines in the pattern should be equal to the value entered by the user.
/*

* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>
int main()
{
	int n = 4;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j <= n - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
