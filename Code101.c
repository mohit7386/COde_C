//WAP and print the detail of the Student using typedef keyword
#include<stdio.h>
#include<string.h>
typedef struct ComputerEngineeringStudent { //here we are using the typedef keyword with the help of this keyword we can print the values with their alias names...benefit is we don't need to write the data type when we are creating the typedef..
    char name[100]; 
    int roll,collegecode;
    int IdNumber;
    float percentage;
 }coe; //here we are creating the alias names and it will always declare after the brackets..
 int main (){
    coe s1; //Here data type is replaced with the alias name coe which is done by using the typedef 
    s1.roll = 1878610033;
    s1.IdNumber=444;
    s1.collegecode=786;
    printf("***-----------------------------------------------------------***\n");
    printf("Data of the Student using tydef keyword\n");
    strcpy(s1.name,"Mohit Pratap Singh");//Array ke saath kabhi bhi hum apni string me change nhi kara sakte aur assignment operator ki help se hum store nahi kara sakte hain aise string ko kisi bhi variable me isiliye hume hamesha copy karna padega string ko isiliye strcpy ki help se humne copy kiya hai string ko apni  
    printf("Student Name: %s\n",s1.name);
    printf("Student Roll No.: %d\n",s1.roll);
    printf("Student Id number: %d\n",s1.IdNumber);
    printf("Student College Code: %d",s1.collegecode);
    return 0;
 }