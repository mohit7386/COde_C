//WAP to Calculate the area of square , area of circle , area of rectangle...
#include<stdio.h>
float calculateSquareArea(float side); //These values are our parameteres because values which is used in decleration and definition of the function are called parameteres and these are very responsible to receive the values from the Parameteres..
float calculateCircleArea( float r);
float calculateRectangleArea(float l , float b);
int main() {
    float side,r,l,b;
    printf("For Finding the area of circle , square , rectangle we need the following values:-\n");
    printf("Enter side of the square\n");
    scanf("%f",&side);
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f%f",&l,&b);
    calculateSquareArea(side); //These are our arguments which is passed in the function call and these are responsible to send the values to the parametres..
    calculateCircleArea(r);
    calculateRectangleArea(l,b);
return 0;
}
float calculateSquareArea(float side){ //These are the parameters which takes the value from the arguments 
    float area1 = side*side;
    printf("The Area of the Square is: %f\n",area1); 
}
float calculateCircleArea(float r){
    float area2= 3.14*r*r;
    printf("The Area of the Circle is: %f\n",area2);
}
float calculateRectangleArea(float l , float b){
    float area3= l*b;
    printf("The Area of the Rectabgle is: %f\n",area3);
}
//Hamara jo bhi kuch main() function me likha hoga sirf wahi print hoga otherwise it will not print anything in our output..