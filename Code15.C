//WAP to check the marks of the student and declare the result whether it is pass or fail
#include<stdio.h>
int main (){
    int marks,percentage;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    if(marks<=30){
        printf("FAIL");}
        else if(marks>30 && marks <=100){
            printf("PASS\n");  
            printf("Your Percentage will be: %d",percentage=(marks*100)/100); 
        }
    else{
        printf("Wrong Number Entered\n");
    }
    return 0;
    }

