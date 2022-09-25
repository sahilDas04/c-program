// Railway reservation program in C

#include <stdio.h>
int main()
{
	int class;
	int n, m;
	char ch;
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

	printf("Press 1 for First Class Seat Reservation\n\n");
	printf("Press 2 for Economy Class Seat Reservation\n\n");
	printf("\t\t*******Ur Seat Number Should be Between 1 to 500********\n\n");
	printf("Plzz Input Ur Choise(1/2)>>>> ");
	scanf("%d", &class);

	switch (class)
	{
	case 1:
		printf("Enter ur seat number in first class: ");
		scanf("%d", &n);
		if (n < 100)
		{
			printf("\t\t________YOUR TICKET INFORMATION_________\n\n");
			printf("Your Class: First Class\n");
			printf("Your seat Number is: %d\n\n", n);
		}
		else
		{
			printf("Seats full!!!....Do u Wanna Reserved in Economy class: ");
			scanf("%s", &ch);
			if (ch == 'y')
			{
				printf("\t\t________YOUR TICKET INFORMATION_________\n\n");
				printf("Your Tickets has been booked in economy class\n", ch);
				printf("Your seat Number is: %d\n\n", n);
			}
		}
		break;
	case 2:
		printf("Enter Ur Seat Number in Economy Class: ");
		scanf("%d", &m);
		if (m < 300)
		{
			printf("\t\t________YOUR TICKET INFORMATION_________\n\n");
			printf("Your Class: Economy Class\n");
			printf("Your seat Number is: %d\n\n", m);
		}
		else
		{
			printf("Tickets are SOLD OUT\n\n");
		}
		break;
	default:
		printf("Sorry There is an Error ! Plz Choose Given Option\n\n\n");
		break;
	}
	printf("\t\tTHANK UU!!\n\n");

	return 0;
}
