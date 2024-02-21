//WAP in array to print the array elements..
#include<stdio.h>
void printNumbers(int arr[] , int n);//we can also write the array in the form of square brackets and pointer both the syntax are valid...
//void printNumbers(int *arr , int n); //We can use pointer in arguments It wll not give you the error because arrays is also a pointer..
int main(){
    int arr[] = {1,2,3,4,5,6}; //Initialise the array with the 6 elements and we don't need to mention the size of the array both the syntaxes are correct 
    printNumbers(arr,6); //Calling the function
    return 0;

}
//Definition of the function 
void printNumbers(int arr[] , int n){
     for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

}
// void printNumbers(int *arr , int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

// }
//Array is a pointer why - When you use the array name, like arrayName, it is implicitly converted to a constant pointer pointing to the first element of the array, i.e., &arrayName[0].This conversion happens in specific contexts, such as when passing an array to a function or when using it in pointer arithmetic.
