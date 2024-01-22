//WAP to check the number is prime or not..
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter the number then I am checking whether it is prime or not\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){ //Taking a loop for jahan tk number liya hai wahan tk sabke saath compare kra sake..
        if(num%i==0){ //Checking the condition of i it is true than increase the counter variable 
            count++;
        }
    }
    if(count==2)
    printf("It's a Prime Number\n");
    else
    printf("Not a Prime Number\n");
    return 0;
}