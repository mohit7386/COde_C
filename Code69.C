//WAP to count how many even numbers is present in our data 
#include<stdio.h>
int countEven(int arr[] , int n);
int main(){
    int n;
    printf("Enter the limit how many numbers you want to give\n");
    scanf("%d",&n); //Taking the limit from the user 
    int arr[n]; //Decleration of the array
    printf("Enter %d Numbers\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); //Taking Input from the user and stored at some address in the memory
    }
    countEven(arr,n); //Calling the function 
    return 0;
}
int countEven(int arr[] , int n){
    int count = 0;
    for(int i=0;i<n;i++){ //In array loop is for traversing and accessing the values 
    if(arr[i]%2==0){ //Checking whether is even or not....
        count++;
    }
    }
    printf("The Total Number of even numbers in your data is: %d",count); //Printing the total numbers 
}