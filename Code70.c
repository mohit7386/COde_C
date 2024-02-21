//WAP to check the values of pointers in memory location 
#include<stdio.h>
int main (){
    int arr[]={1,2,3,4,5};
    printf("%d\n",(arr+2)); //So here we are printing the array value with the +2 then it will print the address of the third variable not the actual value 
    printf("%d\n",*(arr+4)); //this will print the value of 4th index which is present on the fifth position in the array 
    printf("%d\n",*(arr+5));//Here the size of the array is not five so it prints the unidentified value..
    return 0;
}
//So here we are accessing the value with these methods...
//1- arr[2]; -> this is the method will print the actual value 
//2- *(arr+2); -> this is the method will print the actual value with the help of pointer..