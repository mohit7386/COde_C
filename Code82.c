//Format Specifier '%s' is used for only String if we want to print the whole string then we use this 
#include<stdio.h>
int main(){
    char arr[] = "MOHIT"; //Initialise the array of char type with the string - MOHIT // in this String C automatically puts the null character in the end 
    printf("Enter Your First Name\n");
    scanf("%s",&arr); //here we are taking the string of full name from user on the address of arr 
    printf("Your First name is: %s\n",arr); //Print the Whole String using format specifier %s
    char fullname[100];
    printf("Enter Your Full Name\n");
    scanf("%s",&fullname); //here is the problem and the problem is scanf cannot input multi-word strings with spaces It can only input the contiguous string without space...that's why it will only print your name before space...
    printf("Your Full Name is: %s",fullname);
    //So the Solution of this problem is coded in the next code let's check
    return 0;
}