//WAP to check the given character is present in your string or not...
#include<stdio.h>

int isPresent(char str[], char ch);

int main() {
    char str[100], ch;
    printf("Enter a string:\n");
    scanf("%s", str); //Here we don't need to put the address before the str because for the char array when we are using the %s then it automatically points the address of first ellement so we don't need to put the address in scanf and we also don't need to traverse the string using loop because in case of string it automatically traversing on each element..

    printf("Enter the character you want to check in your string:\n");
    scanf(" %c", &ch); // Use %c for character input

    isPresent(str, ch);

    return 0;
}

int isPresent(char str[], char ch) {
    int present = 0; // Flag to indicate if the character is present

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            present = 1; // Set the flag if character is found
            break;       // Exit the loop since we found the character
        }
    }

    if (present) {
        printf("Yes, Character is Present in your String\n");
    } else {
        printf("Character is not present in your string\n");
    }

    return 0;
}
