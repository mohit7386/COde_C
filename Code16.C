//WAP to check the Character Entered by User is Uppercase or Lowercase or Digit
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any Character\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase\n");
            }
            else if(ch>='a' && ch<='z'){
                printf("Lowercase\n");
            }
            else if(ch>='0' && ch<='9'){
                printf("It's a Digit\n");
            }
            else if(ch<'0'){
                printf("Negative Number\n");
                            }
            else{
            printf("It's a Special Characters \n");
            printf("**ASCII Value of your entered special character is: %d**",ch);
            } //Here we are using parenthesis because here two printf lines so only line is supported without parenthesis...
            return 0;
}