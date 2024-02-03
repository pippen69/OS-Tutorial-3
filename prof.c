#include <stdio.h>
#include <stdlib.h>

int main() {
    //pointers
    char *prof;
    int *student_id, *grades;

    //allocate 256 characters
    prof = (char *)calloc(256, sizeof(char));

    //check if memory allocation was successful
    if (prof == NULL) {
        perror("Error allocating memory for professor");
        return 1;
    }

    //enter prof name
    printf("enter professor's name: ");
    scanf("%255s", prof);

    //# of students marking
    int num_students;
    printf("Enter the number of students to mark: ");
    scanf("%d", &num_students);

    //allocate memory for student_id
    student_id = (int *)malloc(num_students * sizeof(int));
    grades = (int *)malloc(num_students * sizeof(int));

    //check if memory allocation was successful
    if (student_id == NULL || grades == NULL) {
        perror("error allocating memory for student_is or grades");



        //free allocated memory
        free(prof);
        return 1;
    }

  
    int *num_students_ptr = &num_students;

   
    free(prof);
    free(student_id);
    free(grades);

    return 0;
}
