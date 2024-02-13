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
        name[strlen(name) - 1] = '\0'; //Terminating the String when new line character is found 
    }
printf("Enter Your Age: \n");
scanf("%d",&age);
printf("Enter Your Cgpa: \n");
scanf("%f",&cgpa);
fprintf(fptr,"Student Name: %s\n",name);//Print karane ke liye hum hamesha fprintf use karenge
fprintf(fptr,"Student Age: %d\n",age);
fprintf(fptr,"Student Marks: %f\n",cgpa);
fclose(fptr);
return 0;
}