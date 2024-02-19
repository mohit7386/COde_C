//WAp to Calculate the sum of the numbers between 5 to 50(include 5 and 50 also)..
#include<stdio.h>
int main(){
    int sum=0;
    for(int i=5;i<=50;i++){
        sum+=i; //We can also write as sum = sum+i; -> Both have the same meaning 
    }
    printf("The sum of the all the numbers between 5 and 50 is: %d",sum);
    return 0;
}