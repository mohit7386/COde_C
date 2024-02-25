//WAP to take the password as input from the user and merge with the salt which is 123 and it will merge in the end..
#include<stdio.h>
#include<string.h>
void salted(char password[]);
int main(){
    char password[100]; //Creating an array of password 
    printf("Enter Your Password\n");
    scanf("%s",password); //you do not need to use the address operator (&) because The array should be large enough to accommodate the expected input string. Note that password itself represents the address of the first element in the array.
    printf("Your new updated password with adding salt init is: \n");
    salted(password);
    return 0 ;
}
void salted(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass,password);//newPass= "test" //We are copying the values 
    //Now After copying the values from the string then we need to merge the values using concatination 
    strcat(newPass,salt);//newPass = "test"+"123" = "test123" //Concatinate the string
    puts(newPass);
}