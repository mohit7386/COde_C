//Let's we will see the example of pointers to structures
#include<stdio.h>
#include<string.h>
struct student { //Data type 
    char name[100]; 
    int roll,collegecode;
    int IdNumber;
    float percentage;
 };
 int main(){ 
    //Now we are initialising the structures and called it as initialisation of structures
    struct student s1={"Mohit Pratap Singh ",1213,564,123324,86}; //Initialise of the Structure
    printf("Student Roll No: %d\n",s1.roll);
    struct student *ptr=&s1;
    printf("Student Roll No (Using Pointer): %d\n",(*ptr).roll); //Printing the roll number with the use of Pointer...
    printf("Student Roll No (Using Arrow Operator): %s",ptr->name); //Printing the name with the use of Arrow Operator
    return 0;
    }