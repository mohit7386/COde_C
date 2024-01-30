//WAP in array to print the array elements..
#include<stdio.h>
void printNumbers(int *arr , int n); //We can use pointer in arguments because arrays is also a pointer..
int main(){
    int arr[] = {1,2,3,4,5,6};
    printNumbers(arr,6); //Calling the function
    return 0;

}
//Definition of the function 
void printNumbers(int *arr , int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

}