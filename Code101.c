//WAP and print the detail of the Student 
#include<stdio.h>
#include<string.h>
typedef struct ComputerEngineeringStudent { //here we are using the typedef keyword with the help of this keyword we can print the values with their alias names...benefit is we don't need to write the whole name if we use alias names..
    char name[100]; 
    int roll,collegecode;
    int IdNumber;
    float percentage;
 }coe; //here we are creating the alias names and it will always declare after the brackets..
 int main (){
    coe s1; //Here we only initialise the structure with their alias name..we don't need to write struct ComputerEngineeringStudent
    s1.roll = 2134;
    s1.IdNumber=444;
    printf("Data of the Student\n");
    strcpy(s1.name,"Mohit Pratap Singh");
    printf("Student Name: %s\n",s1.name);
    printf("Student Roll No.: %d\n",s1.roll);
    printf("Student Id number: %d",s1.IdNumber);
    return 0;
 }