//Here I wanna check the pointer arithmetic
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age; //The Value of the *ptr is also 22..
    printf("%d\n",ptr); 
    ptr++;
    printf("%d\n",ptr); //Difference in both the values are 4 because when pointer increases or decreases the value then the value is totally depend on the data type - It will increase or decrease the value through the data type....here the data type is int and the memory takes 4 byte so that's why the value of his address will increase by 4.
    ptr--;
    printf("%d\n",ptr); //Here we descrease the value of ptr which is decrease by 4 because of int data type. So pointer will increase or decrease the address value on the basis of it's data type..
    return 0;
}
//jab hum pointer ka increment or decrement karte hain ar pointer ptr ko print karate hain to jis data type ka hota hai wo variable utni hi bytes increase ho jaati hai 