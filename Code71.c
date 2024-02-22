//WAP and taking a input as an array and print the reverse of an array.......
#include<stdio.h>
void reverseArray(int arr[] , int n); //Here we are creating the reverse function 
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
        return 0;
    }
void reverseArray(int arr[] , int n){ //Function definition 
    for(int i=0;i<n/2;i++){ //limit the loop to the n/2 because we don't need to reverse the whole array we only reverse the half array and rest will automatically replace the digits with their firstvalue digit 
    int firstvalue=arr[i]; //Taking the first Value of the array 
    int secondvalue=arr[n-i-1]; //yahan pe (n-i-1) isiliye liya hai kyuki agar kewal n-1 lenge to ek hi value true hoti rahegi aur ek hi value ko print karata rahega to saari values ko check kar sake iske liye i lagaya hai jisse minus hoke 
    arr[i]=secondvalue; //Replacing the first value to the second value 
    arr[n-i-1]=firstvalue; //Replacing the second value to the firstvalue
    }
    for(int i=0;i<n;i++){ //Print the Reverse of an array 
        printf("%d\n",arr[i]);
    }
}