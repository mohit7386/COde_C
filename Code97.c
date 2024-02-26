//Now we are learning the Array of Strutures 
//WAP and create the array of structures and stored the data of Multiple Students in the array and accessing by their indexes
#include<stdio.h>
#include<string.h>
 struct student { //Data type creating a Structure and here we are declaring the structure of the student....yahan humne declare kiya hai ki kya kya student ke data me rakhna hai aur hum baad me isko use karke array of Structures abanayenge..
    char name[100]; 
    int roll,collegecode;
    int IdNumber;
    float percentage;
 };
 int main(){ 
     
    struct student CS[100];//Initialisation of array of Structure in which we can store 100 of students..So in the 100 space for students data will create and the indexing start with 0 to 99

    strcpy(CS[0].name,"Mohit Pratap Singh");
    CS[0].roll=1234; //Here we are storing the roll no. at oth index of the array of Structures
    CS[0].collegecode=456;
    CS[0].IdNumber=011232;
    CS[0].percentage=98;
    //We can also store multiple data of students in our memory on the diff. diff. locations of indexes 
    printf("\n");
    printf("==================Data of Computer Science Students====================\n");
    printf("Data of Student 1:- \n\n");
    printf("Student Name: %s\n",CS[0].name); //Here we are using the %s in place of %c because %s is responsible to print the whole string at a time but %c print only single character So if you want to print only single character then you can use the %c in place of %s
    printf("Student Roll No: %d\n",CS[0].roll);
    printf("Student College Code: %d\n",CS[0].collegecode);
    printf("Student IdNumber: %d\n",CS[0].IdNumber);
    printf("Student percentage: %f\n",CS[0].percentage);
    printf("*************************************************************************\n");
     strcpy(CS[1].name,"Bhawani Pratap Singh");
    CS[1].roll=4321;
    CS[1].collegecode=564;
    CS[1].IdNumber=022343;
    CS[1].percentage=99;
    printf("Data of Student 2:- \n\n");
    printf("Student Name: %s\n",CS[1].name);
    printf("Student Roll No: %d\n",CS[1].roll);
    printf("Student College Code: %d\n",CS[1].collegecode);
    printf("Student IdNumber: %d\n",CS[1].IdNumber);
    printf("Student percentage: %f\n",CS[1].percentage);
        printf("\n");
    printf("============Data of Electronics Students=============\n");
    struct student ECE[100];//Initialisation of array of Structure in which we can store 100 of students..So in the 100 space for students data will create and the indexing start with 0 to 99

    strcpy(ECE[0].name,"Lucky Singh");
    ECE[0].roll=56453; //Here we are storing the roll no. at oth index of the array of Structures
    ECE[0].collegecode=456;
    ECE[0].IdNumber=312212;
    ECE[0].percentage=87;
    //We can also store multiple data of students in our memory on the diff. diff. locations of indexes 
        printf("\n");
    printf("Data of Student 1:- \n\n");
    printf("Student Name: %s\n",ECE[0].name);
    printf("Student Roll No: %d\n",ECE[0].roll);
    printf("Student College Code: %d\n",ECE[0].collegecode);
    printf("Student IdNumber: %d\n",ECE[0].IdNumber);
    printf("Student percentage: %f\n",ECE[0].percentage);
    printf("*************************************************************************\n");
     strcpy(ECE[1].name,"Rajat Singh");
    ECE[1].roll=2233;
    ECE[1].collegecode=768;
    ECE[1].IdNumber=909891;
    ECE[1].percentage=76;
    printf("Data of Student 2:- \n\n");
    printf("Student Name: %s\n",ECE[1].name);
    printf("Student Roll No: %d\n",ECE[1].roll);
    printf("Student College Code: %d\n",ECE[1].collegecode);
    printf("Student IdNumber: %d\n",ECE[1].IdNumber);
    printf("Student percentage: %f\n",ECE[1].percentage);

    return 0;
 }