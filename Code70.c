//WAP to check the values of pointers in memory location 
#include<stdio.h>
int main (){
    int arr[]={1,2,3,4,5};
    printf("%d\n",*(arr+2)); //So here we are printing the value of 3 which is located on (arr+2) so it means the value of 2th index in arr and we print the value because of pointer...
    printf("%d\n",*(arr+5));//Here the size of the array is not five so it prints the unidentified value..
    return 0;
}