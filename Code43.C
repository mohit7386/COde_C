//WAP to print the table of any number entered by the user using function..
#include<stdio.h>
void printTable(int num);
int main(){
    int num;
    printf("Enter any Number\n");
    scanf("%d",&num);
    printf("The Table of %d is: \n\n",num);
        printTable(num); //here we called 'num' as a argument..
    }
void printTable(int num){ //and this is our parameter
     for(int i=1;i<=10;i++){
        int t=num*i;
        printf("%d * %d = %d\n",num,i,t);
     }
}
