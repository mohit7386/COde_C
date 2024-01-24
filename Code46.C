//Write a function to print "Hot" or "Cold" depending on the temperature user enters.
#include<stdio.h>
void enterTemperature(int temp); //Declare the function 
int main(){
    int temp;
    printf("Enter the temperature\n");
    scanf("%d",&temp);
    enterTemperature(temp); //Here temp is our argument which those values which are passed in function call are called Arguments and they are used to send values.

}
void enterTemperature(int temp){ //Here these values are Parameters because it is declared in function declaration and definition and these are used to receive the values..
    if(temp<15 && temp>1){
    printf("Cold\n");
    }
    else if(temp>15 && temp<=35)
    {
        printf("It's Sunny! Not Much Hot! Congrats! You can go Outside\n");
    }
    else if (temp<1){
        printf("It's a Freezing Weather! So be avoid to go Outside..");
    }
    else {
    printf("Very hot Weather! Cancel the Vacation otherwise if you go outside your Skin Burns\n");
    }
}
//Function can only return one value at a time..
//Changes in the parameter of the function will not effect the Argument or we can say that If we want to change the function definition values then our main function will not effect and the values are not change in the main function.