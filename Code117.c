//WAP to allocate memory with calloc() and see how calloc initialise the value to 0
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr=(float*)calloc(5,sizeof(float)); //Dynamic memory Allocation through calloc and printing the floating point values and 5 represents the how many location you need to store something 
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
    }
    printf("With the help of calloc() function All the Values is initialising with 0\n");
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    free(ptr);
    return 0;
    //Calloc function value ko initialise kar deta hai 0 ke saath mein jab hum calloc function create karte hain to matlab ki jab hum value ko print karayenge calloc ki help se to zero zero aayega aur calloc aur malloc ke function me bas itna difference hai ki malloc ke initialisation me multiply lag jaata hai aur calloc ke initialisation me comma lag jaata hai...
    //So if we want to create the memory allocation and want initialisation with zero then we always use calloc 
}