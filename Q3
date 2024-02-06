#include <stdio.h>
#include <stdlib.h>

struct student
{ 
	int id;
	int age;
	int year;
};

int save_student(int id, int age, int year);

int main()
{

	// initializes the struct
	struct student e;

	// takes the user input for the id, age and year started
	printf("Enter Student ID, Age, and year start at Ontario Tech U:\n");
	scanf("%d %d %d", &e.id, &e.age, &e.year);
	save_student(e.id, e.age, e.year);
}

int save_student(int id, int age, int year) {
	// initializing file reader and writers
	FILE *fp1, *fp2;
	
	// opens student.txt into append mode
	fp1 = fopen("student.txt", "a");
	
	// prints the information into the student.txt file
	fprintf(fp1, "%d %d %d", id, age, year);
	fclose(fp1);
	return 0;
}
