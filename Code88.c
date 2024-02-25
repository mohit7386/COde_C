#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char str1[100];
    
    printf("Enter Your First Name: \n");
    fgets(str, 100, stdin);

    // Removing the newline character from the string
    if (strlen(str) > 0 && str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter your Last Name: \n");
    fgets(str1, 100, stdin);

    // Removing the newline character from the string
    if (strlen(str1) > 0 && str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    strcat(str, str1);
    printf("Your Full Name after Concatenation of the String is: \n");
    puts(str);
    //Here we are removing the new line character from the string and replace with the null character
    // Get the length of the concatenated string
    int length = strlen(str);
  if(length>0 && str[length-1]=='\n'){
    str[length-1]='\0';
    length-1; //Decrementing the length of the string...because excluding the null character
  }
    // Print the length of the string
    printf("Length of the concatenated string is: %d\n", length-1);

    return 0;
}
//Compiler puts automatically null character in the end of the string when we are using the %s
