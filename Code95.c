//Now we are learning Structures - Structures is a collection of values or elements of different data types but in array- It's a collection of elements but of the same data type under a single variable name....
//Struct is a user defined data type 
#include<stdio.h>
#include<string.h>
//creating a structure and it's data type
//Declaraing the variable 
struct student //data type 
{
    //Here we see there are multiple data types below,..we can store multiple data types in our structures,,
      char name[100]; 
      int roll;
      float cgpa;
};
int main(){
    struct student s1; //Creating a variable and here s1 is a variable 
    //s1.name="MOHIT"; // cannot directly modify or change the value of the string and cannot store in the variable using assignment operator we can only copy the values using strcpy library function 
    s1.roll= 1878610033;
    s1.cgpa = 9.8;
    strcpy(s1.name,"MOHIT Pratap Singh "); //see we are copying the string MOHIT to the s1.name after that you can access the value of the s1.name....You can only copy the values..
    printf("*************Data of the Student 'MOHIT' Displayed below:*************\n");
    printf("Student Name: %s\n",s1.name);
    printf("Student Roll Number: %d\n",s1.roll);
    printf("Student CGPA: %f\n",s1.cgpa);
    return 0;
    //Structures are also Stored in Contiguous Memory location means continuos memory location
}
