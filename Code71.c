//WAP and taking a input as an array and print the reverse of an array.......
#include<stdio.h>
void reverseArray(int arr[] , int n); //Here we are creating the reverse function 
void printArray(int arr[] , int n); //Here we are creating a function for printing the array 
int main (){
    int n;
    printf("Enter the size of numbers\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); //Taking array input from user 
    }
    printf("Reverse of an Array is:\n");
        reverseArray(arr,n);
        printArray(arr,n); //Call both the functions 
        return 0;
    }
    void printArray(int arr[] , int n){ //For Printing the array
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
    }
    //It's a call by refrence function because are call by refrence not the call by value..
void reverseArray(int arr[] , int n){ //Function definition 
    for(int i =0;i<n/2;i++){
    int temp =arr[i]; //Swap the elements of the array 
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    }
}