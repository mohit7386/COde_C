//WAP to convert the temperature celsius into fahrenhiet using function
#include<stdio.h>
float convertTemperature(float celcius);
int main (){
    float celsius;
    printf("Enter the temperature in celsius \n");
    scanf("%f",&celsius);
    float result = convertTemperature(celsius);
    printf("Temperature in fahrenhiet is: %f",result);
    return 0;
}
//Recursive Function Definition 
float convertTemperature(float celcius){
    if(celcius==0){
        return 32.0;  
    }
    return (celcius*9.0/5.0)+32; 
}