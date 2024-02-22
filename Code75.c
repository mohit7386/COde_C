//WAP to find the largest number in the array and also find the position of that element comment out the part of position and you can able to print the position of the element..
#include<stdio.h>
int findlargestNumber(int arr[],int size); //Create the function 
int main(){
    int size; //Initialise the size of the array 
    //int position;
    printf("Enter the size of the array\n");
    scanf("%d",&size); //Taking the size as input 
    int arr[size]; //Declare the array 
    printf("Enter the elements in the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]); //Taking the values of the array and stored in the address of array 
    }
    int largestNumber=findlargestNumber(arr,size); //Calling the function 
    printf("The Largest Number in the whole array is %d\n",largestNumber); //Print the largest Number 
    //printf("The Index position of the largest number in array is: %d",position);//Print the position of the largest number 
    return 0; 
}
int findlargestNumber(int arr[],int size){ //Definition of the function 
    int largest = arr[0]; //Assuming the first number is our largest number because after that we can compare the values which is largest or not
    //*position=0; //Initialise the value of the position to zero 
    for(int i=1;i<size;i++){
        if(arr[i]>largest ){ //Checking the condition and if the condition is true then iterate the loop again n again till the for loop condition is satisfied..
            largest = arr[i]; //Storing the value of arr[i] in largest variable
           // *position=i;
        }
    }//After Checking all the conditions if the for loop condition false then print the largest number using function call
    return largest; //return largest value
}