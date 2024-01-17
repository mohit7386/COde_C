//Here we are taking the example of i++ and ++i and learn how pre and post increment Works...
// i++ - We can say this a Post increment 
//++i - we can say this a pre increment 
#include<stdio.h>
int main(){
    int i=1;
    int a=2;
    printf("%d\n",i++); //Here firstly we use the value and increase the value by 1 here we use the value and print 1 but the value is incremented internally by 1.
    printf("Now the Updated Value will be this: %d\n",i); //Here we are printing the incremented value.
    printf("%d\n",++a); //here the value firstly will increse than use..
    printf("%d\n",a); //here we are printing the updated value..
    return 0;
}