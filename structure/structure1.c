#include <stdio.h>
#include <string.h>
struct student
{
	int id;
	int marks;
	char fav_char;
	char name[3];
};
struct student pratyush, angshu, nilay;

int main()
{

	pratyush.id = 1;
	angshu.id = 3;
	nilay.id = 6;
	pratyush.marks = 001;
	angshu.marks = 002;
	nilay.marks = 003;
	pratyush.fav_char = 'p';
	angshu.fav_char = 'a';
	nilay.fav_char = 'n';
	strcpy(pratyush.name, "pushu");
	strcpy(angshu.name, "buru");
	strcpy(nilay.name, "naru");

	printf("pratyush's name is: %s\n", pratyush.name);
	printf("pratyush's id is %d\n", pratyush.id);
	printf("pratyush got %d marks\n", pratyush.marks);
	printf("pratyush's fav_char is %c\n", pratyush.fav_char);

	printf("angshu's name is: %s\n", angshu.name);
	printf("angshu's id is %d\n", angshu.id);
	printf("angshu got %d marks\n", angshu.marks);
	printf("angshu's fav_char is %c\n", angshu.fav_char);

	printf("nilay's name is: %s\n", nilay.name);
	printf("nilay's id is %d\n", nilay.id);
	printf("nilay got %d marks\n", nilay.marks);
	printf("nilay's fav_char is %c\n", nilay.fav_char);

	return 0;
}
