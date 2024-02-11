//Iniyialisation of Structures 
#include<stdio.h>
#include<string.h>
 struct student { //Data type creating a Structure and here we are declaring the structure of the student....yahan humne declare kiya hai ki kya kya student ke data me rakhna hai aur hum baad me isko use karke array of Structures banayenge..
    char name[100]; 
    int roll,collegecode;
    int IdNumber;
    float percentage;
 };
 int main(){ 
    //Now we are initialising the structures and called it as initialisation of structures
    struct student s1={"Mohit Pratap Singh ",1213,564,123324,86}; //Here we Initialise all the values in brackets ye method follow karna tab jyada shi rehta hai jab humein saari values pata ho pehle se pre defined structures bana rhe hain tab use karenge iss method ko 
    strcpy(s1.name,"Mohit Pratap Singh");
    printf("Data of student with using Initialisation of the Structures\n");
    printf("Student name: %s\n",s1.name);
    printf("Student roll: %d\n",s1.roll);
    printf("Student College Code: %d\n",s1.collegecode);
    printf("Student Id Number: %d\n",s1.IdNumber);
    printf("Student Percentage: %f\n",s1.percentage);
    return 0;
 }
    
