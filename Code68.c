//WAP to count the odd Numbers in an array Taking inpur from the user..
#include<stdio.h>
int countOdd(int arr[],int n);
int main(){
     int n;
    printf("Enter the limit in which you want to count the odd numbers\n");
    scanf("%d",&n);
    int arr[n]; //Decleration of the array 
    printf("Enter the %d numbers:-\n",n);
    for(int i=0;i<n;i++){ 
        scanf("%d",&arr[i]); //Taking the input from the user in array..
    }
    countOdd(arr,n); //Calling the function 
    return 0;
}
int countOdd(int arr[],int n){
    int count =0;
    for (int i=0;i<n;i++){
        if(arr[i]%2!=0){ //Checking the value odd or not 
            count++;
        }
    }
     printf("The Total Odd Numbes Present in all the digits are: %d",count);
}