//Now we are learning Structures - Structures is a collection of values or elements of different data types but in array collection of elements happened but of the same data type..
//Struct is a user defined data type 
#include<stdio.h>
#include<string.h>
//creating a structure and it's a data type
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
    //s1.name="MOHIT"; //Here we cannot write directly a string to this s1.name variable...you cannot directly assign or copy a string using the assignment operator (=) after the array has been declared. The reason for this limitation is that arrays are treated as pointers to their first element, and C does not allow direct assignment or modification of arrays after their declaration.
    strcpy(s1.name,"MOHIT"); //Here we cannot directly modify the array values so that's why we only copy the values so we are using strcpy library function 
    s1.roll= 18786;
    s1.cgpa = 9.8;
    printf("*************Data of the Student 'MOHIT' Displayed below:*************\n");
    printf("Student Name: %s\n",s1.name);
    printf("Student Roll Number: %d\n",s1.roll);
    printf("Student CGPA: %f\n",s1.cgpa);
    return 0;
    //Structures are also Stored in Contiguous Memory location
}
