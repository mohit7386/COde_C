//WAP to print the first and last name of arrays using function
#include<stdio.h>
void printString(char arr[]); //We don't need to give the size of the array because in string we know ki loop jahan tak null character aayega wahan tak chalega so that's why we don't need to put the size of the array..
int main(){
    char firstname[]= "MOHIT"; //Creating the array of String first name 
    char lastname[]= "PRATAP SINGH";//Creating the array of String last name 
    printString(firstname); //Calling the function firstname
    printString(lastname); //Calling the function lastname 
    return 0;
}
void printString(char arr[]){ //Definition of the function 

    for(int i=0;arr[i]!='\0';i++){ //Traverse the each element in the array till we get '\0' after getting the null character then loop terminates and does not print the string forward 
        printf("%c",arr[i]); //Print the all function calls till we get the null character...
        //Yahan par ek hi loop dono calls ke liye kaam karega first and last name dono print ho jaayenge isi ek loop se 
    }
    printf("\n");//move the cursor to the new line 
}