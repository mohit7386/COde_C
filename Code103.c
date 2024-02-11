//WAP to create a structure to store the bank account details of a customer in a ABC bank use alias for it
#include<stdio.h>
#include<string.h>
typedef struct bankDetails{
    char name[60];
    long accountNo;
}acc;//Creating a alias for the structure
int main(){
    acc user; //We need to declare the variable first for accessing the structures 
    printf("Enter your Account Number: ");
    scanf("%ld",&user.accountNo);
    getchar(); //Consume the new line character if you are not putting it then it will not print the name of the cutomer so you need to put the getchar then customer name will print 
    printf("Enter Your Name: \n");
    fgets(user.name,60,stdin);
     if (user.name[strlen(user.name) - 1] == '\n') { //Point the last charactrer in the string..It checks the string length then -1 because indexing starts from zero so the last index will be -1 if string length == new line character hota hai to condition true hai aur next statement mein move kar jaayega...
        user.name[strlen(user.name) - 1] = '\0';} //If found then replace the last character of the string with null character then null character is used to terminate the string so it terminates the string....
        printf("Your Details is Stored in the memory and Mentioned Below: \n");
    printf("Your Name: %s\n",user.name);
    printf("Your Account Number is: %ld\n",user.accountNo);
    return 0;
}
//If you do not put the getchar(); then these are the scenarios were happening to you:- 
// Skipping Input:

// After entering the account number using scanf("%d", &user.accountNo);, there is a newline character ('\n') left in the input buffer.
// When fgets is called to read the user's name, it might read the newline character as an empty string, especially if the user just pressed "Enter" after entering the account number.
// Name Input Issue:

// If fgets reads an empty string (due to the leftover newline character), it may not wait for the user to input the name, or it might store an empty string in the name member of the user structure.
// Incorrect Output:

// When you later print the user's name using printf("Your Name: %s\n", user.name);, it may print an empty string or not wait for user input, resulting in unexpected or incorrect output.