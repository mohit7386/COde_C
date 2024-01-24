//WAP to add the 18% GST in your Current Price of your Product..
#include<stdio.h>
float calculatePrice( float price);
int main (){
    float price;
    printf("Enter the price of your product\n");
    scanf("%f",&price);
    printf("The Price of the product is: %f",price);
    finalprice=calculatePrice(price);
    printf("The Price of the product after adding the 18% GST is: %f",price);

    return 0;
}
float calculatePrice(float price){
    float finalprice = price+((price*18)/100);
    return price;
}