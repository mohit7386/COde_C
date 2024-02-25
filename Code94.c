//WAP to remove the spaces from the given String...
#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]);
int main() {
    char str[100];

    // Input a string with spaces
    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin); //Taking the String input from the user 

    // Remove the newline character from fgets
    if (str[strlen(str) - 1] == '\n') { //Checking krta hai ki koi space to nhii le rha hai string me kyuki jab user enter press krta hai to wo bhi include kar leti hai string array isiliye last me hum check krte hain ki space to nhi hai agr hota hai to end me null character store kara dete hain jisse string wahin terminate ho jaaye...in which [strlen(str) - 1] -> Accessing the last character of the String..
        str[strlen(str) - 1] = '\0'; //Replacing the new line character with null character
    }

    // Remove spaces and print the result
    removeSpaces(str);
    printf("String after removing spaces: %s\n", str);

    return 0;
}

void removeSpaces(char str[]) {
    int i, j;

    // Traverse the string
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        // Copy non-space characters to the same string
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }

    // Null-terminate the string after removing spaces
    str[j] = '\0';
}
