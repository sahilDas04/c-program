// Railway Reservation System in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define rajdhani 1200.08
#define Satabdi 2000.69
#define hamsafar 1800.53
#define howrah 1600.04
#define Duronto 2200.06

struct passenger
{
	char name[1000];
	char gender[1000];
	int age;
	int seat;
	int sleeper;
};
struct passenger pass[1000];

int main()
{
	int arr[1001];

	int n, p, a, b, c, e, f;
	float raj = rajdhani;
	float sat = Satabdi;
	float ham = hamsafar;
	float how = howrah;
	float dur = Duronto;
	char i;
	char source[34];
	char dest[34];

	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|              BROUGHT TO YOU BY                |\n");
	printf("\t\t|               |  PRATYUSH  |                  | \n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");

	printf("Enter Number of Passengers: ");
	scanf("%d", &p);
	printf("Enter The Source Place: ");
	// fgets(source, sizeof(source), stdin);
	scanf("%s", &source);
	printf("Enter The Destination Place: ");
	// fgets(dest, sizeof(dest), stdin);
	scanf("%s", &dest);
	printf("\n");
	for (int i = 0; i < p; i++)
	{
		printf("Enter the Passenger Name: ");
		scanf("%s", &pass[i].name);
		printf("Enter the Passenger Gender: ");
		scanf("%s", &pass[i].gender);
		printf("Enter the Passenger age: ");
		scanf("%d", &pass[i].age);
		printf("\n");
	}
	printf("The following trains are available......\n");
	printf("1. Rajdhani Express..................10:00 a.m............sealdah station\n");
	printf("2. Satabdi Express...................06:00 p.m............sealdah station\n");
	printf("3. hamsafar Express..................21:30 p.m............sealdah station\n");
	printf("4. howrah-yesvantpur Express.........12:00 a.m.............howrah station\n");
	printf("5. Duronto Express...................19:00 p.m............sealdah station\n\n");
	printf("Enter ur Choise: ");
	scanf("%d", &a);
	printf("Enter ur choise........\n");
	printf("\t\t1. sleeper class....\n");
	printf("\t\t2. A.C class.....\n");
	scanf("%d", &b);
	switch (b)
	{
	case 1:
		

		for (int i = 0; i < p; i++)
		{
			printf("Enter ur Preffered Seat Numbers: \n");
			scanf("%d", &pass[i].sleeper);
		}
		break;
	case 2:
		printf("Enter ur choise.....\n");
		printf("\t\t1. 3A Tier....\n");
		printf("\t\t2. 2A Tier....\n");
		scanf("%d", &e);
		for (int i = 0; i < p; i++)
		{
			printf("Enter ur Preffered seat Number: \n");
			scanf("%d", &pass[i].seat);
		}
		break;
	default:
		printf("\t\tSorry There is an Error ! Plz Choose Given Option\n\n");
		break;
	}
	printf("\t\t\t\t________YOUR TICKET INFORMATION_________\n\n");
	for (int i = 0; i < p; i++)
	{
		printf("\t\tPassenger name: %s\n", pass[i].name);
		printf("\t\tPassenger Gender: %s\n", pass[i].gender);
		printf("\t\tPassenger Age: %d\n", pass[i].age);
		printf("\n");
	}

	printf("\t\tYour Bourding Place: %s\n", source);

	printf("\t\tYour Destination: %s\n", dest);
	printf("\n");
	switch (a)
	{
	case 1:
		printf("\t\tTrain is: Rajdhani Express\n");
		printf("\t\tBoarding time: 10:00 AM\n");
		printf("\t\tTotal Bill Amount: %f\n", rajdhani * p);

		break;
	case 2:
		printf("\t\tTrain is: Satabdi Express\n");
		printf("\t\tBoarding time: 06:00 PM\n");
		printf("\t\tTotal Bill Amount: %f\n", Satabdi * p);
		break;
	case 3:
		printf("\t\tTrain is:Hamsafar Express\n");
		printf("\t\tBoarding time: 21:30 AM\n");
		printf("\t\tTotal Bill Amount: %f\n", hamsafar * p);
		break;
	case 4:
		printf("\t\tTrain is: howrah-yesvantpur Express\n");
		printf("\t\tBoarding time: 12:00 AM\n");
		printf("\t\tTotal Bill Amount: %f\n", howrah * p);
		break;
	case 5:
		printf("\t\tTrain is: Duronto Express\n");
		printf("\t\tBoarding time: 19:00 PM\n");
		printf("\t\tTotal Bill Amount: %f\n", Duronto * p);
		break;
	default:
		printf("\t\t\t\tSorry There is an Error ! Plz Choose Given Option\n\n");
		break;
	}
	printf("\n");
	switch (e)
	{
	case 1:
		for (int i = 0; i < p; i++)
		{
			printf("\t\tYour Allocated Class is FIRST CLASS(3A) & Your Seat Number: A%d\n", pass[i].seat);
		}
		break;
	case 2:
		for (int i = 0; i < p; i++)
		{

			printf("\t\tYour Allocated Class is FIRST CLASS(2A) & Your Seat Number: B%d\n\n", pass[i].seat);
		}
		break;
	default:

		for (int i = 0; i < p; i++)
		{
			printf("\t\tYour Allocated Class is SLEEPER CLASS & Your Seat Number: S%d\n\n", pass[i].sleeper);
		}
		break;
	}
	printf("\t\t\t\t\tTHANK UUU!!!\n\n");
	return 0;
}
