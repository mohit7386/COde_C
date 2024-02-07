//WAP to check the work of strlen used to count the letters in the string..
//here two programs is available in this code comment one then run another program 
// #include<stdio.h>
// #include<string.h>
    // int main(){
    //     char arr[] = "Mohit";
    //     printf("length is: %d",strlen(arr)); //strlen is used to count the length of the whole string and print the value with the help of printf
    //     return 0;
    // }
//Also create the user defined take the string from the user 
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
    int length = strlen(arr); //Stored the length of the string in the new variable length 
    //Replace new line character with null character if present 
     for (int i = 0; i < length; i++) {
        if (arr[i] == '\n') { //when arr[i] is reached on the new line then stored null character in arr[i] and null character excluding with the help of strlen  
            arr[i] = '\0'; 
            break;  // Exit the loop after replacing the first newline character
        }
    }
    return strlen(arr);
}