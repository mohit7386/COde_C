//Write 2 Functions one to print hello and second is to print goodbye..
#include<stdio.h>
void printhello(); //Declaration of the function 
void printgoodbye();
int main(){
printhello(); //Function Calls 
printgoodbye();
return 0;
}
void printhello(){
    printf("Hellooo!\n"); //Function Defination
}
void printgoodbye(){
    printf("Goodbye:)\n");
}