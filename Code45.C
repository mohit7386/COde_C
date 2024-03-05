//WAP to find the square root of any number entered by the user..
#include<stdio.h>
#include<math.h> //Using header file math.h for using some library functions and do some mathematical operations.....
double findSquareroot(double num); //Taking the function for priting the squareroot of any number..

int main(){
 double num;
 printf("Enter any Number\n");
 scanf("%lf",&num);//lf represents float type value 
  double squareRoot=findSquareroot(num);
  printf("Square Root of %.2lf is %.4lf\n",num,squareRoot); //Here we are writing the .2 and .4 ye hume point ke baad kitni decimal place tak answer chahiye wo batata hai jaise .2lf ka mtlb hai point ke baad 2 decimal place tak answer karega same as for .4lf..
return 0;
}
double findSquareroot(double num){
    return sqrt(num); //here sqrt is a keyword...meaning of sqrt and working of the sqrt is already written in the compiler..compiler already knows the meaning of the sqrt..
}