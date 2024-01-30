//WAP to enter the price of 3 numbers and print their final cost with GST..
//So this the Code in Array 
//Here total 2 programs is here which you want to run it's up to you you just need comment out one code and run..
#include<stdio.h>
int main(){
    float product[3];
    printf("Enter the Price of 1st Product\n");
    scanf("%f",&product[0]); //taking the value from the user for 0th index 
    
    printf("Enter the Price of 2nd Product\n");
    scanf("%f",&product[1]); //taking the value from the user for 1st index 
    
    printf("Enter the Price of 3rd Product\n");
    scanf("%f",&product[2]); //taking the value from the user for 2nd index 
    //printf("The Total Price with GST for Product 1 is:- %f \n",product[0]+(0.18*product[0]));
    // printf("The Total Price with GST for Product 2 is:- %f \n",product[1]+(0.18*product[1]));
    // printf("The Total Price with GST for Product 3 is:- %f \n",product[2]+(0.18*product[2]));
    int finalcost = product[0]+product[1]+product[2]; //Sum up all the array values and store it to the new variable here yahan pe variable me store karayegnge koi array me nahi reason is that jo sumup hoke value aayegi wo number hai na ki koi array hai to isiliye hum store karayenge variable me..
    float finalcostwithgst = finalcost+((float)finalcost*0.18); //Adding GST in our Final Price 
    printf("The Final Cost of the Product with GST is: %.2f\n",finalcostwithgst); //let's print the final price 
    return 0;
}