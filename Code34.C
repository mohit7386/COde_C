//WAP to print the factorial from the given number entered by the user..
#include<stdio.h>
int main(){
long int fact=1,num; //We need to put the vaslue of fact=1 because we are multiplying the number if we set it to zero then after multiplication result is also zero..
printf("Enter the number then I am telling you the factorial of that number\n");
scanf("%ld",&num);
for(int i=1;i<=num;i++){
    fact=fact*i;
}
printf("The Factorial of the %d is: %d\n",num,fact);
return 0;
}
//We only solve short factorial numbers not bigger is supportable for data types...we learn in the next chapter how to solve the bigger factorial number.