//WAP to count the how many times the letter will come in your string 
#include<stdio.h>

int countLength(char arr[] , char letter); //Create the function for count the one specific character from the string 

int main() {
    char name[50];
    char letter;
    printf("Enter any String\n");
    fgets(name, 50, stdin);
    printf("Enter the letter you want to count in your string\n");
    scanf("%c",&letter);
    printf("Count of %c in your entered String is: %d",letter, countLength(name,letter));
    return 0;
}

int countLength(char arr[],char letter) {
    int count = 0;  // Initialize the count variable to 0
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == letter) { //compare all the array values and matched with the typed letter entered by the user
            count++;  // Increment the counter variable when 'i' is found
        }
    }
    return count;  // Return the count of occurrences of 'i'
}
