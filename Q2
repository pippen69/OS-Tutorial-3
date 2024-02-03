#include <stdio.h>
#define MAX_SIZE 10
int main (){

	int numbers [MAX_SIZE];

	FILE *file =fopen("question2.txt", "r");

	if (file==NULL){
		printf("error in opening g file");
		return 1;
	}

	for (int i =0; i<MAX_SIZE; i++){
		if (fscanf(file, "%d", &numbers[i]) !=1){
		printf("Error reading from the file .\n");
		fclose(file);
		return 1;
		}
	}

	fclose(file);
	

	printf("array contents: ");
	for (int i = 0; i < MAX_SIZE; ++i){
		printf("%d", numbers [i]);
	}
	printf("\n");

	return 0;
}
