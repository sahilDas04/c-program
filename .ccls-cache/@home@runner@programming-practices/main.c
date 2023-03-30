#include <stdio.h>
int main(){
  // number is odd or even
  // int num;
  // printf("Enter the number: ");
  // scanf("%d", &num);
  // if(num%2==0){
  //   printf("%d is even", num);
  // }
  // else{
  //   printf("%d is odd", num);
  // }

  
  // leap year
  //  int year;
  // printf("Enter the year: ");
  // scanf("%d", &year);
  // if(year%4==0){
  //   printf("%d is leap year", year);
  // }
  // else if(year%400==0){
  //   printf("%d is leap year", year);
  // }
  // else if (year%100==0){
  //   printf("%d is not leap year", year);
  // }
  // else{
  //   printf("%d is not leap year", year);
    
  // }

  int s1,s2,s3,s4,s5;
  printf("Enter your marks out of 100\n");
  printf("Enter your marks: ");
  scanf("%d", &s1);
  printf("Enter your marks: ");
  scanf("%d", &s2);
  printf("Enter your marks: ");
  scanf("%d", &s3);
  printf("Enter your marks: ");
  scanf("%d", &s4);
  printf("Enter your marks: ");
  scanf("%d", &s5);  
  int total=s1+s2+s3+s4+s5;
  int avg=(total) /5;
  if(avg>=40){
    printf("you are passed & total marks is: %d/500", total);
  }
  else{
    printf("you are failed & total marks is: %d/500", total);
  }
  
  return 0;
}