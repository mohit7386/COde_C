#include <stdio.h>
int main() {
    //Here we are trying to print the different different data types 
    int a=25;
    char star='*';
    float pi=3.14;
    int age;
    int b,c,d,sum=0;
    printf("Hey World I am trying once again to comeback in game");
    printf("\n I also can do the same and being successful in the game and rule the tech world\n");
    //Now here we are taking Input from the User
    printf("Enter the age we will display from age output\n");
    scanf("%d",&age);
    printf("Your Age is: %d\n",age);
    printf("%d\n",a);
    printf("%c\n",star);
    printf("%f\n",pi);
     printf("Size of bool: %lu bytes\n", sizeof(bool));
     //Now We are trying to do the sum of three Numbers
     printf("Enter the Valur of a\n");
     printf("Enter the Valur of b\n");
     printf("Enter the Valur of c\n");
     scanf("%d",&b);
     scanf("%d",&c);
     scanf("%d",&d);
     sum=b+c+d;
     printf("The sum of a+b+c is: %d",sum);
    return 0;
}