//Strings - Sequence of characters are called Strings..
//ex- str= "Mohitpratapsingh" - So it is written in double codes it's a sequence of character
//arr[] = {'M','O','H','I','T'}; - its a normal character array 
//arr[] = {'M','O','H','I','T','\0'}; - It's not a normal character it is a string because in the end null character is present ("\0") it's a null character it helps to terminate the string 
//A Character array terminated by a null character ("\0") is called String...
//If we want to create the string array then we need to put the null character in the end because it tells the compiler it's a String and this array is terminated here...But in java we don't need to put the null character because in java strings are automatically null terminated..
//In the memory string is stored in the contigous manner and in the null character is also stored in the memory 
#include<stdio.h>
int main(){
    printf("It's a Normal Character Array\n");
    char arr[5]={'M','O','H','I','T'}; //Initailise the array of characters..
    for(int i=0;i<5;i++){ //Traverse the each element in the array...
        printf("%c",arr[i]); //Print the array of string 
    }
    printf("\n");
    printf("It's a String and terminated by the null Character\n");
     char arr1[6]={'M','O','H','I','T','\0'}; //We are using the null Character in the end so character array will be terminated by the null character..
    for(int i=0;i<6;i++){ //Traverse the each element in the array...
        printf("%c",arr1[i]); //Print the array of string 
    }
    printf("\n");
    printf("Second method of printing the character array\n");
    char arr2[20]="MOHIT PRATAP SINGH"; //Second method of initialisation of the array of the string but one thing kept in mind always enclosed with the double codes..
    for (int i=0;i<20;i++){
    printf("%c",arr2[i]);
    }
    return 0;
} 