//Strings - Sequence of characters are called Strings..
//ex- str= "Mohitpratapsingh" - So it is written is double codes it's a sequence of character
//arr[] = {'M','O','H','I','T'}; - its a normal character array 
//arr[] = {'M','O','H','I','T','\0'}; - It's not a normal character it is a string because in the end null character is present ("\0") it's a null character it helps to terminate the string 
//A Character array terminated by a null character ("\0")
//If we want to create the string array then we need to put the null character in the end because it tells the compiler it's a String and this array is terminated here...
#include<stdio.h>
int main(){
    char arr[5]={'M','O','H','I','T'}; //Initailise the array of characters..
    for(int i=0;i<5;i++){ //Traverse the each element in the array...
        printf("%c",arr[i]); //Print the array of string 
    }
    printf("\n");
     char arr1[6]={'M','O','H','I','T','\0'}; //We are using the null Character in the end so character array will be terminated by the null character..
    for(int i=0;i<6;i++){ //Traverse the each element in the array...
        printf("%c",arr1[i]); //Print the array of string 
    }
    printf("\n");
    char arr2[5]="MOHIT"; //Second method of initialisation of the array of the string but one thing kept in mind always put the Double Codes in the end..
    for (int i=0;i<5;i++){
    printf("%c",arr2[i]);
    }
    return 0;
} 