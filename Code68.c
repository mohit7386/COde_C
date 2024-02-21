//WAP to count the odd Numbers in an array Taking inpur from the user..
#include<stdio.h>
int countOdd(int arr[],int n); //Creating an array and taking n for size of the array....
int main(){
     int n;
    printf("Enter how many numbers you want to enter: \n");
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
            count++; //Hum count isiliye liye kyuki ye value jitni baar true hogi utni baar hi count increase karega and all odd numbers ki value count me hogi to simply count ko print kara lenge hum.....count ki jagah koi aur name ka variable bhi le sakte hain it's only for programmer understanding so you can choose any of the variable 
        }
    }
     printf("The Total Odd Numbes Present in all the digits are: %d",count);
}