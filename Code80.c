//WAP to print the first and last name of arrays using function
#include<stdio.h>
void printString(char arr[]);
int main(){
    char firstname[]= "MOHIT"; //Creating the array of String first name 
    char lastname[]= "PRATAP SINGH";
    printString(firstname); //Calling the function firstname
    printString(lastname); //Calling the function lastname 
    return 0;
}
void printString(char arr[]){ //Definition of the function 
    for(int i=0;arr[i]!='\0';i++){ //Traverse the each element in the array till we get '\0' after getting the null character then loop terminates and does not print the string forward 
        printf("%c",arr[i]); //Print the all calls 
    }
    printf("\n");
}