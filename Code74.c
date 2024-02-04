//WAP In an array of numbers, find how many times does a number 'x' Occurs.
#include<stdio.h>
int counttheNumber(int arr[],int size,int num); //Creating the function for count the numbers occur in the elements 
int main (){
    int size,num; //Initialise the size and num for taking the values from the user
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size]; //Initialise the array 
    printf("Enter the elements of the array\n");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]); //Taking the elements from the user in array
    }
    //Taking the input of the number
    printf("Enter the number you want to count in the array of elements\n");
    scanf("%d",&num);
    int countOccurences=counttheNumber(arr,size,num); //Calling the function 
    printf("The number %d occurs %d times in the array\n",num,countOccurences); //Print the values of the function 
    return 0;
}
int counttheNumber(int arr[],int size,int num){ //Definition of the function 
    int count=0;
    for(int i=0;i<size;i++){ //Iterate all the elements and checking the condition if it is true and increase the value of the count 
        if(arr[i]==num){
            count++;
        }
    }
    return count; //Return count
}