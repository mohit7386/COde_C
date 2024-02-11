//WAP to create the function and want to know how Structure works when passing to function
#include<stdio.h>
#include<string.h>
//here first we decalare the structure then crearting the function..
struct student { //Data type 
    char name[100]; 
    int roll,collegecode;
    int IdNumber;
    float percentage;
 };
 //If you are try to create the function without declaring the structure then compiler gives you the error 
 void printInfo(struct student s1); //Here when we dealing with structures then we create the function after decleration of the structure...
 int main(){ 
    //Now we are initialising the structures and called it as initialisation of structures
    struct student s1={"Mohit Pratap Singh ",1213,564,123324,86}; //Initialise of the Structure
    printInfo(s1); //It's a call by value function 
    return 0;
    }
    void printInfo(struct student s1){ //Definition of the function
        printf("Information of the Student\n"); //Here Printing the Information of the Student 
        strcpy(s1.name,"Mohit Pratap Singh");
      printf("Student Name: %s\n",s1.name); //Here we are using the dot operator in place of arrow operator 
      printf("Student Roll No.: %d\n",s1.roll);
      printf("Student College Code: %d",s1.collegecode);
    }