//WAP to create a structure and store the data of 3 students..
#include<stdio.h>
#include<string.h>
//Declaring the Structure 
struct student //It is a Data Type
{
    char name[100];
    int roll,Collegecode;
    float marks;
};
int main(){
    struct student s1; //Data type and variable and variable is = s1;
    strcpy(s1.name,"Mohit Pratap Singh"); //Copy the String to the s1.name
    s1.roll = 1234; //Assigning the roll no to the s1 variable 
    s1.Collegecode = 987;
    s1.marks=98;
    printf("==========================================================\n");
    printf("*******Data of Student 1********\n");
    printf("Student Name: %s\n",s1.name); //Printing the name of the student structure which is stored in s1 variable 
    printf("Student Roll No.: %d\n",s1.roll);
    printf("Student College Code: %d\n",s1.Collegecode);
    printf("Student Marks: %f\n",s1.marks); 
    printf("==========================================================\n");
     struct student s2;
    strcpy(s2.name,"Lucky"); //Copy the String to the s1.name
    s2.roll = 4321;
    s2.Collegecode = 789;
    s2.marks=89;
    printf("*******Data of Student 2********\n");
    printf("Student Name: %s\n",s2.name);
    printf("Student Roll No.: %d\n",s2.roll);
    printf("Student College Code: %d\n",s2.Collegecode);
    printf("Student Marks: %f\n",s2.marks); 
    printf("==========================================================\n");
     struct student s3;
    strcpy(s3.name,"Rajat Singh"); //Copy the String to the s1.name
    s3.roll = 1122;
    s3.Collegecode = 667;
    s3.marks=92;
    printf("*******Data of Student 3********\n");
    printf("Student Name: %s\n",s3.name);
    printf("Student Roll No.: %d\n",s3.roll);
    printf("Student College Code: %d\n",s3.Collegecode);
    printf("Student Marks: %f\n",s3.marks); 
    printf("==========================================================\n");
return 0;
}
