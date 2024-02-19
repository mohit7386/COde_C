//WAP to print the 4X5 of Star Pattern using nested loop..
#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){ //Creating the Rows 
        for(int j=1;j<=5;j++){ //Creating the number of columns 
            printf("*"); //Print the star Pattern which have 4 rows and 5 columns 
        }
        printf("\n"); //Here we are moving the cursor to the next line and print the star row..
    }
    return 0;
}