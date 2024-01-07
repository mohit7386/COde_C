//Program to find the Perimeter of the Rectangle
#include<stdio.h>
int main(){
    int length , Breadth,Perimeter;
    printf("Enter the Length and Breadth of the Rectangle\n");
    scanf("%d%d",&length,&Breadth);
    Perimeter=2*(length + Breadth);
    printf("The Perimeter of the Rectangle is: %d",Perimeter);
    return 0;
}