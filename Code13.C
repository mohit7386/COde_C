//WAP to print the the area of circle and perimeter of rectangle with using switch case.
#include<stdio.h>
int main(){
    int num,l,b,side,perimeter;
    float r,area;
    printf("Enter any Number from (1-3)\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1: printf("Enter the Radius of Circle\n");
            scanf("%f",&r);  
            area=3.14*r*r; 
            printf("The Area of the Circle is: %d",(int)area); //Here we convert explicitly float type result to int because compiler not able to do by himself so we can to force the compiler using explicit conversion.
        break;
    case 2: printf("Enter the Length and Breadth of the Rectangle\n");
            scanf("%d%d",&l,&b);
            perimeter=2*(l+b);
            printf("The Perimeter of the Rectangle is: %d",perimeter);
            break;
    default: printf("Wrong Choice Enter Number 1 or 2\n");
        break;
    }
}