//Here we are doing the code of 2D Arrays
//2D Arrays is same as 1D array and we can easily understand if we visualise the matrix 
#include<stdio.h>
int main (){
    int marks[2][3]; //2 is for Row and 3 is for Column 
    marks[0][0]=99;
    marks[0][1]=78;
    marks[0][2]=83;
    marks[1][0]=92;
    marks[1][1]=65;
    marks[1][2]=90;
    printf("--------------------------------------------------\n");
    printf("Marks of First Student\n");
    printf("**************************\n");
    printf("Marks of Hindi:- %d\n",marks[0][0]);
    printf("Marks of English:- %d\n",marks[0][1]);
    printf("Marks of Computer:- %d\n",marks[0][2]);
    printf("**************************\n");
    printf("Marks of Second Student\n");
    printf("**************************\n");
    printf("Marks of Sanskrit:- %d\n",marks[1][0]);
    printf("Marks of Science:- %d\n",marks[1][1]);
    printf("Marks of Physics:- %d\n",marks[1][2]);
return 0;
}