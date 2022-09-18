// electric bill
#include <stdio.h>
#include <string.h>
struct ebill
{
    char name[34];
    int id;
    float amount;
    char address[200];
};
struct ebill p1, p2;

int main()
{
    printf("due electric bill\n\n");
    strcpy(p1.name, "pratyush singha");
    p1.id = 1;
    p1.amount = 6444.09;
    strcpy(p1.address, "balivara, malancha rd, naihati, kolkata, west bengal");

    strcpy(p2.name, "angshu roy");
    p2.id = 2;
    p2.amount = 14563.09;
    strcpy(p2.address, "Sector 43B, Road No - 06, Market Complex, City : Siliguri, State : West Bengal");

    printf("pi's name is:%s\n", p1.name);
    printf("pi's id is:%d\n", p1.id);
    printf("pi's address is:%s\n", p1.address);
    printf("pi's due bill is:%f\n", p1.amount);

    printf("p2's name is:%s\n", p1.name);
    printf("p2's id is:%d\n", p2.id);
    printf("p2's address is:%s\n", p2.address);
    printf("p2's due bill is:%f\n", p2.amount);

    return 0;
}
