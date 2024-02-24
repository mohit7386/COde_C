//Solution of the multi-word String Input Problem 
//Want to see the use of gets() and puts() and fgets(var , size , file (stdin))
//gets() is used for taking the input value from the user and puts() is used to print the value which is taken from the user 
#include<stdio.h>
int main(){
    char sample[100];//Creating an array of size 100
    //Why gets and puts used ? -> Because if we want to give the input of multi-word Strings then we use gets and puts 
    printf("Enter Your Full Name: \n");
    gets(sample); //It's usage is dangerous and Outdated - It takes the input from the user and also input the multi-word String with space. It also takes the input with spaces 
    puts(sample); //Print's the String as it is  
    char sample2[200];
    //Syntax -> fgets(var.name , size , file) //In place of file we put stdin - because we only want input from fgets
    printf("Enter Your Full Name: \n");
    fgets(sample2,200,stdin); //Always use this in place of gets() because it is safer to use.
    puts(sample2); //Print the value same as user input 
    return 0; 
}