// Simple ATM program in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define balance1 5000.00
struct banking
{
    float with;
    float dep;
};
struct banking atm[100];

int main()
{
    int pin, i, transaction;
    int op;
    printf("\t\t\t\t\t%s", __DATE__);
    printf(" %s\n\n", __TIME__);
    printf("\t\t\t\t===========*Welcome To BANK OF RANJHANA ATM*===========\n\n");
    while (pin != 1234)
    {
        printf("Plz enter ur Pin: ");
        scanf("%d", &pin);
        if (pin != 1234)
        {
            printf("\t\tInvalid Pin!!!......plz Try Again\n");
        }
        else
        {
            
            printf("\t\t\t\t=======================================================\n\n");
            // options
            printf("\t\t\t1.withdrawl\n");
            printf("\t\t\t2.Deposit\n");
            printf("\t\t\t3.Check Balance\n\n");
            // taking input from user
            printf("\tplz select the option: ");
            scanf("%d", &op);
            printf("\n\n");
            switch (op)
            {
            case 1:
                // withdrawl
                printf("\t\tEnter ur amount: ");
                scanf("%f", &atm[i].with);
                printf("\n\n");
                if (atm[i].with < 500.00)
                {
                    printf("\t\tThe amount should be greater than 500\n\n");
                }
                else if (atm[i].with > 5000)
                {
                    printf("\t\t\t\t\t\tInsufficiant Balnace!!!\n");
                }
                else
                {
                    printf("\t\tYou have Withdrawn Rs. %0.2f.", atm[i].with);
                    printf("new balance is: %0.2f\n", balance1 - atm[i].with);
                }
                break;
            case 2:
                // deposit
                printf("\t\tplz enter ur amount: ");
                scanf("%f", &atm[i].dep);
                printf("\n\n");
                printf("\t\tU have deposited Rs. %0.2f.", atm[i].dep);
                printf("Ur new balance is: %0.2f\n", balance1 + atm[i].dep);
                break;
            case 3:
                // balance check
                printf("\t\tUr Balance is %0.2f\n", balance1);
                break;
            default:
                printf("Srry There is an error!!....Plz Try Again");
                break;
            }
            printf("\t\t\t\t===========*Thank U for Banking With BANK OF RANJHANA*===========\n\n");
        }
    }

    return 0;
}
