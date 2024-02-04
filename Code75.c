//WAP to find the largest number in the array 
#include<stdio.h>
int findlargestNumber(int arr[],int size); //Create the function 
int main(){
    int size; //Initialise the size of the array 
    printf("Enter the size of the array\n");
    scanf("%d",&size); //Taking the size as input 
    int arr[size]; //Declare the array 
    printf("Enter the elements in the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]); //Taking the values of the array and stored in the address of array 
    }
    int largestNumber=findlargestNumber(arr,size); //Calling the function 
    printf("The Largest Number in the whole array is %d\n",largestNumber); //Print the result 
    return 0; 
}
int findlargestNumber(int arr[],int size){ //Definition of the function 
    int largest = arr[0]; //Assuming the first number is our largest number because after that we can compare the values which is largest or not
    for(int i=1;i<size;i++){
        if(arr[i]>largest ){ //Checking the condition 
            largest = arr[i]; //Storing the value of arr[i] in largest variable
        }
    }
    return largest; //return largest value
}