//Write a function to print "Hot" or "Cold" depending on the temperature user enters.
#include<stdio.h>
void enterTemperature(int temp);
int main(){
    int temp;
    printf("Enter the temperature\n");
    scanf("%d",&temp);
    enterTemperature(temp);

}
void enterTemperature(int temp){
    if(temp<20){
    printf("Cold\n");
    }
    else if(temp>20 && temp<=35)
    {
        printf("Not Much Hot\n");
    }
    else {
    printf("Very hot Weather\n");
    }
}