//WAP to take a Information of a Student and print in the file 
#include<stdio.h>
#include<string.h>
int main(){
FILE *fptr;
fptr=fopen("Newtestfile.txt","w");
char name[100];
int age;
float cgpa;
printf("Enter Your Name: \n");
fgets(name,100,stdin);
if (name[strlen(name) - 1] == '\n') {//Targeting the last element of the string 
        name[strlen(name) - 1] = '\0'; //Setting the last element to the null character and terminating the string 
    }//This type of jhanjhat only on C language but in java strings are automatically null terminated 
printf("Enter Your Age: \n");
scanf("%d",&age);
printf("Enter Your Cgpa: \n");
scanf("%f",&cgpa);
//When we want to write something in the file then we use the fprintf and if we want to write something in the terminal as a message then we use printf
fprintf(fptr,"%s","Student Information:-\n");
fprintf(fptr,"Student Name: %s\n",name);//Print karane ke liye hum hamesha fprintf use karenge
fprintf(fptr,"Student Age: %d\n",age);
fprintf(fptr,"Student CGPA: %f\n",cgpa);
fclose(fptr);
printf("Student Information Stored Successfully in the file\n");
return 0;
}