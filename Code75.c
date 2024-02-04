//WAP to find the largest number in the array 
#include<stdio.h>
int findlargestNumber(int arr[],int size,int *position); //Create the function 
int main(){
    int size; //Initialise the size of the array 
    int position;
    printf("Enter the size of the array\n");
    scanf("%d",&size); //Taking the size as input 
    int arr[size]; //Declare the array 
    printf("Enter the elements in the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]); //Taking the values of the array and stored in the address of array 
    }
    int largestNumber=findlargestNumber(arr,size,&position); //Calling the function 
    printf("The Largest Number in the whole array is %d\n",largestNumber); //Print the largest Number 
    printf("The position of the largest number in array is: %d",position);//Print the position of the largest number 
    return 0; 
}
int findlargestNumber(int arr[],int size,int *position){ //Definition of the function 
    int largest = arr[0]; //Assuming the first number is our largest number because after that we can compare the values which is largest or not
    for(int i=1;i<size;i++){
        if(arr[i]>largest ){ //Checking the condition 
            largest = arr[i]; //Storing the value of arr[i] in largest variable
            *position=i;
        }
    }
    return largest; //return largest value
}