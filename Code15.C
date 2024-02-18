// //WAP to check the marks of the student and declare the result whether it is pass or fail
//here two programs is coded you just need to comment one code and run another 
// #include<stdio.h>
// int main (){
//     int marks,percentage;
//     printf("Enter your marks\n");
//     scanf("%d",&marks);
//     if(marks<=30){
//         printf("FAIL");}
//         else if(marks>30 && marks <=100){
//             printf("PASS\n");  
//             printf("Your Percentage will be: %d",percentage=(marks*100)/100); 
//         }
//     else{
//         printf("Wrong Number Entered\n");
//     }
//     return 0;
//     }

#include<stdio.h>
int main(){
    int x=2; //we are initialise the value of x with 2 
    if(x=1){ //Now the updated value of x is 1 so value is updated that's why it will print the new value of x because we are using the assignment operator in place of relational operator so that's why the value of x is 1....
        printf("X is Equal to 1\n");
    }
    else
    printf("X is not equal to 1\n");
    return 0;
}