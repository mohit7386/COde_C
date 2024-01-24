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
    float finalprice = price+((price*18)/100);
    return finalprice;
}