//WAP to add the 18% GST in your Current Price of your Product..
#include<stdio.h>
float calculatePrice( float price); //Declare the function 
int main (){
    float price;
    printf("Enter the price of your product\n");
    scanf("%f",&price);
    printf("The Price of the product is: %f\n",price);
    float finalprice=calculatePrice(price);
    printf("**The Final Price of the product after adding the GST is: %f**\n",finalprice);
    return 0;
}
float calculatePrice(float price){
    float finalprice = price+price*0.18; //formula for calculating the price with GST 
    return finalprice;
}//In this program we are taking the two same variable of finalprice but there is no issue you can take the same variables in the function call and the function definition this will not create any kind of issue in your code...and there is no conflict and the values will not overlap each other