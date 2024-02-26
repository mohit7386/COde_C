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
    struct student s1={"Mohit Pratap Singh ",1213,564,123324,86}; //Initialisation of the Structure
    printf("Student Roll No: %d\n",s1.roll);
    struct student *ptr=&s1; //here we are initialising the Pointer to the structure 
   //  strcpy(s1.name,"Mohit Pratap Singh"); when we are using pointer then we don't need to copy the values...with the help of pointer we can directly modify or change the values..there is no need to use any kind of library function 
    printf("Now Printing the data of the student with the help of pointer\n");
    //printf("All the Details of the student using pointer: %s %d %d %f\n",(*ptr));
    printf("Student Roll No (Using Pointer): %d\n",(*ptr).roll); //Printing the roll number with the use of Pointer...
    printf("Student Name (Using Pointer): %s\n",(*ptr).name);
    printf("Student Name (Using Arrow Operator): %s\n",ptr->name); //Printing the name with the use of Arrow Operator
    printf("Student Id No. (Using Arrow Operator): %d",ptr->IdNumber); //Printing the IdNumber Using the Arrow Operator
    return 0;
    }