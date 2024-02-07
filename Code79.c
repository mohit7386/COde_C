//WAP to create the string of first name and last name to store the details of the user and print all the characters using a loop....
#include<stdio.h>
int main(){
    char firstname[]= {'M','O','H','I','T','\0'};
    char lastname[]= {' ','P','R','A','T','A','P',' ','S','I','N','G','H','\0'};
    printf("Your Full Name is : \n");
    for(int i=0;i<6;i++){
        printf("%c",firstname[i]);
    }
    for(int i=0;i<13;i++){
        printf("%c",lastname[i]);
    }
    return 0;
}