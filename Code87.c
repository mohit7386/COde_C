//WAP to check the work of strlen used to count the letters in the string..
//here two programs is available in this code comment one then run another program 
// #include<stdio.h>
// #include<string.h>
//     int main(){
//         char arr[] = "Mohit";
//         printf("length is: %d",strlen(arr)); //strlen is used to count the length of the whole string and print the value with the help of printf
//         return 0;
//     }
//Also create the user defined program to take the string from the user 
#include<stdio.h>
#include<string.h>
int getstringLength(char arr[]);
int main(){
    char arr[50];
    printf("Enter the String\n");
    fgets(arr,50,stdin);
    printf("length of your string is: %d",getstringLength(arr));
    return 0;
}
int getstringLength(char arr[]){
    int length = strlen(arr); //Stored the length of the string in the new variable length....Because strlen will not return the int value so that's why we are typecasting the value to the length variable 
     
    return length-1; //Remove the new line character 
}