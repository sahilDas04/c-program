/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>
struct travel_agent_manager
{
    char name[34];
    char lic[45];
    char route[34];
    int kms;
};
struct travel_agent_manager d1, d2, d3;

int main()
{
   printf("\t\t****Enter The Details Of The Drivers*****\n\n");
    // first driver input:
    printf("Enter The Name Of First Driver: ");
    scanf("%s", &d1.name);
    printf("Enter The Driving Lic. Of First Driver: ");
    scanf("%s", &d1.lic);
    printf("Enter The route Of First Driver: ");
    scanf("%s", &d1.route);
    printf("Enter The Number Of KMs of First Driver: ");
    scanf("%d", &d1.kms);
    // second driver input:
    printf("\n\nEnter The Name Of Second Driver: ");
    scanf("%s", &d2.name);
    printf("Enter The Driving Lic. Of Second Driver: ");
    scanf("%s", &d2.lic);
    printf("Enter The route Of Second Driver: ");
    scanf("%s", &d2.route);
    printf("Enter The Number Of KMs of Second  Driver: ");
    scanf("%d", &d2.kms);
    // third driver input:
    printf("\n\nEnter The Name Of Third Driver: ");
    scanf("%s", &d3.name);
    printf("Enter The Driving Lic. Of Third Driver: ");
    scanf("%s", &d3.lic);
    printf("Enter The route Of Third Driver: ");
    scanf("%s", &d3.route);
    printf("Enter The Number Of KMs of Third Driver: ");
    scanf("%d", &d3.kms);

    printf("\t\t****Displaying Information****\n\n");
  
    // first driver information:
    printf("\t\t****Enter The Details Of The Drivers*****\n\n");
    printf("The Name Of First Driver: %s\n", d1.name);
    printf("The Driving Lic. Of First Driver: %s\n", d1.lic);
    printf("The route Of First Driver: %s\n", d1.route);
    printf("The Number Of KMs of First Driver: %d\n\n", d1.kms);

    // second driver information:
    printf("The Name Of Second Driver: %s\n", d2.name);
    printf("The Driving Lic. Of Second Driver: %s\n", d2.lic);
    printf("The route Of Second Driver: %s\n", d2.route);
    printf("The Number Of KMs of Second Driver:  %d\n\n", d2.kms);
    // third driver information:
    printf("The Name Of Third Driver: %s\n", d3.name);
    printf("The Driving Lic. Of First Driver: %s\n", d3.lic);
    printf("The route Of First Driver: %s\n", d3.route);
    printf("The Number Of KMs of First Driver:  %d\n\n", d3.kms);

    return 0;
}
