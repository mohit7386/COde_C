/*Are the following valid or not?
a) int a = 8^8 - Valid 
b) int x; int y=x;
c) int x,y=x;
d) char stars = '**';*/

#include<stdio.h>
int main(){
    char stars='**'; //This also a Invalid Statement because character holds only one value at a time but we are giving the two stars so that's why this will gives the error...
    int d,b=d;//It's a Invalid Statement and it will give the error.... 
    int x; int y=x; //Here this statement is also valid...First we haveto declare the X and after that we can use it for expression...
    printf("Enter the value of d\n");
    scanf("%d",&d);
    printf("%d\n",d);
    printf("%c", stars);
    printf("%d", 8^8); //Solution of first Problem - Here Statement is valid but It does not gives the power because compiler reads as a XOR so it gives 0 and for getting the power we need to use "Pow Function"... 
    return 0;
}