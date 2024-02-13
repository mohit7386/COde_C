//WAP to create a structure to store the bank account details of a customer in a ABC bank use alias for it
#include<stdio.h>
#include<string.h>
typedef struct bankDetails {
    char name[60];
    long accountNo;
} acc; // Creating an alias for the structure

int main() {
    acc user; // We need to declare the variable first for accessing the structures 
    printf("Enter your Account Number: ");
    scanf("%ld", &user.accountNo);

    getchar(); // Consume the new line character if you are not putting it then it will not print the name of the cutomer so you need to put the getchar then customer name will print
    printf("Enter Your Name: \n");
    fgets(user.name, 60, stdin);

    if (user.name[strlen(user.name) - 1] == '\n') {
        user.name[strlen(user.name) - 1] = '\0';
    }

    printf("Your Details are Stored in the memory and Mentioned Below: \n");
    printf("Your Name: %s\n", user.name);
    printf("Your Account Number is: %ld\n", user.accountNo);

    return 0;
}
