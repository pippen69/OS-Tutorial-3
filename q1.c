#include <stdio.h>			//import libraries
#include <stdlib.h>

int main(){
	char fname[30];			//initialize variables
	int age,height;
	
	printf("Enter First Name:\n");	//request user inputs
	scanf("%s",fname);		//read user input and store in variable
	printf("Enter Age:\n");
	scanf("%d",&age);
	printf("Enter Height in cm:\n");
	scanf("%d",&height);
	printf("------------------------------------------\nOutput:\n");
	printf("Your first name is: %s\nYour Age:%d\nYour Height (cm): %d\n",fname,age,height); //output
	
} //end of main
