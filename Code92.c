//WAP to check the given character is present in your string or not...
#include<stdio.h>

void isPresent(char str[], char ch);

int main() {
    char str[100], ch;
    printf("Enter a string:\n");
    scanf("%s", str); //Here we don't need to put the address before the str because for the char array when we are using the %s then it automatically points the address of first ellement so we don't need to put the address in scanf and we also don't need to traverse the string using loop because in case of string it automatically traversing on each element..

    printf("Enter the character you want to check in your string:\n");
    scanf(" %c", &ch); // Use %c for character input

    isPresent(str, ch);

    return 0;
}
void isPresent(char str[], char ch) {
    int present = 0; // Flag to indicate if the character is present

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Yes, Character is present in your String! \n");
            return; //Yahin par return laga denge jisse koi jhanjhat nahi rahe yahin pe return kara denge void liya hai isiliye kuch bhi return nahi hoga khaali return likh denge 
        }
    }
    printf("No, Character is Not present in your String! \n");
}
