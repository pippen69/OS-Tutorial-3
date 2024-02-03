#include <stdio.h>
#include <stdlib.h>
#include <math.h>




struct Grade{
	int student_id;
	int mark;
};


void grade_students(struct Grade *grades, int num_students){
	FILE *file = fopen("grades.txt", "w");

	if (file == NULL){
		perror("error opeing grades.txt");
		return;
	}

	int sum = 0;

	for (int i = 0; i < num_students; i++){
	fprintf(file, "student id: %d, mark: %d\n", grades[i].student_id, grades	[i].mark);

	sum += grades[i].mark;
	}


	//avg and std dev.
	double avg = (double)sum /num_students;
	double variance = 0;

	for (int i = 0; i < num_students; ++i){
		variance += pow(grades[i].mark - avg, 2);
	}

	double std_dev = sqrt(variance / num_students);

	fprintf(file, "\n avg: %.21f\n", avg);
	fprintf(file, "standard deviation: %.21f\n", std_dev);

	fclose(file);
}

int main(){


	// pointers
	char *prof;
	struct Grade*grades;


	//256 characters 
	prof = (char *)calloc(256, sizeof(char));

	//check if memory allocation was successful
	if (prof==NULL){
		perror("error allocating memory");
		return 1;
	}


	//enter prof name
	printf("enter professor name: ");
	scanf("%255s", prof);

	//# of students to mark
	int num_students;
	printf("Enter # of students to mark: ");
	scanf("%d", &num_students);


	//allocate memory for students 
	grades = (struct Grade *)malloc(num_students* sizeof(struct Grade));


	//check if memory allocation was successful 
	if ( grades == NULL){
		perror("error allocating memory for students");
	free(prof);
	return 1;
	}

	//ask for student id
	for (int i =0; i < num_students; ++i){
		printf("enter student id  %d", i +1);
		scanf("%d", &grades[i].student_id);

		printf("enter mark for student %d", i +1);
                scanf("%d", &grades[i].mark);

		}
		
	grade_students (grades, num_students);



	free(prof);
	free(grades);

	return 0;
}



