/*
Print the following star pattern. the number of lines in the pattern should be equal to the value entered by the user.

*
**
***
****

*/







#include <stdio.h>  
  
int main(){
  int n;
  printf("Enter the no of coloumns\n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i+1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
