//WAP to print the concationation of the first and last name of the strings of aaray using function
#include<stdio.h>
void printString(char arr[]);
int main(){
    int i,j;
    char firstname[] = "MOHIT";
    char lastname[] = "PRATAP SINGH";
    char fullname[50]; // Assuming the size of the full name is of 50 max
    //Now Concatenate the first and last name of the string
    for(i=0;firstname[i]!='\0';i++){
        fullname[i]=firstname[i];
    }
      fullname[i] = ' '; //Adding space between the first and last name of the string 
    i++; //Incremant the value of i 
    for(j=0;lastname[j]!='\0';j++){
        fullname[i+j]=lastname[j]; //Concatinate the String 
    }
    //Terminate the fullname String otherwise it will go in the Infinite loop 
    fullname[i+j]='\0'; //We are terminating the concatinating string because if we don't do this then it will go in the infinite loop..
    //Now call the function
    printString(fullname);
    return 0;
}
void printString(char arr[]){
    //Print the full name after concatination 
    printf("Your Full Name is: ");
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
        printf(" "); //It Provides the space between Alphabets
    }
    printf("\n");
}