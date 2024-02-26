//Now we are learning Structures - Structures is a collection of values or elements of different data types but in array- It's a collection of elements but of the same data type under a single variable name....
//Struct is a user defined data type 
#include<stdio.h>
#include<string.h>
//creating a structure and it's data type
//Declaraing the variable 
struct student //struct student is a data type 
{
    //Here we see there are multiple data types below,..we can store multiple data types in our structures,,
      char name[100]; 
      int roll;
      float cgpa;
};
int main(){
    struct student s1; //Creating a variable and here s1 is a variable 
    //s1.name="MOHIT"; //When we are using arrays then we cannot directly modify or change the value of the string using assignment operator hum value ko copy kar sakte hain compare kar sakte hain but value ko change nahi kar sakte hain jab bhi array use karenge...Haan agar ye pointer hota to jarur hum store kara sakte the but arrays ke saath hum aisa nahi kara sakte hain...that's why we are using the library function strcpy for copying the value of the string MOHIT into the s1.name 
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
