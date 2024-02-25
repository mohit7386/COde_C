#include<stdio.h>
#include<string.h> //Header file for accessing the string libraries 

int getstringLength(char arr[]);

int main(){
    char arr[50];
    printf("Enter the String\n");
    fgets(arr, 50, stdin);
    printf("length of your string is: %d", getstringLength(arr));
    return 0;
}

int getstringLength(char arr[]){
    int length = strlen(arr);
    
    // Replace newline character with null character if present
    if (length > 0 && arr[length - 1] == '\n') {
        arr[length - 1] = '\0';
        length--; // Decrement length to exclude the newline character
    }

    return length-1; //After decrementing the length of the string then return the decremented string by the compiler 
}
