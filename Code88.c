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
    printf("*****************************************************************\n");
    printf("Your Full Name after Concatenation of the String is: \n");
    puts(str);
    //Here we are removing the new line character from the string and replace with the null character
    // Get the length of the concatenated string
    int length = strlen(str);
  if(length>0 && str[length-1]=='\n'){
    str[length-1]='\0';
    length-1; //Decrementing the length of the string...because excluding the null character....Upar to hume bas string ko print karana tha count ya length thodi find out karni thi isiliye jab hum length ya count find out karenge to humesha null character ko exclude karna padega kyuki wo usko bhi count kar lega...isiliye humne yahan pe length ko minus kar diya hai....jisse wo null character ko count nhi kare ek kam count karega 
  }
  // Counting letters excluding spaces
    int letterCount = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') { //It traverses all the elements of the array and count the letters without spaces and increase the value of the lettercount then print the value of the letter count....It excludes the spaces from the string and only count the letters present in the string...
            letterCount++;
        }
    }
    // Print the length of the string
    printf("Length of the concatenated string is: %d\n", length-1);
    printf("Count of letters in the string is: %d\n", letterCount);

    return 0;
}
//Compiler puts automatically null character in the end of the string when we are using the %s
