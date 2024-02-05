//WAP to copy all the elements of aaray to another array 
#include<stdio.h>
int copyElements(int source[],int destination[],int size); //Taking two arrays one is for taking the values and another one is for copying the values of array 
int main(){
    int size; //Taking the size from the user 
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int source[size];
    int destination[size];
    printf("Enter the elements in array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&source[i]); //Taking the size from the user 
    }
    copyElements(source,destination,size); //Calling the function 
    return 0;
}
int copyElements(int source[],int destination[],int size){ //Definiton of the function 
    for(int i=0;i<size;i++){ //Iterate all the values 
        destination[i]=source[i]; //Transfer the value of the source[i] into destination[i] array
    }
    printf("After Copying the array values into the new array and the new array will be:- \n");
    for(int i=0;i<size;i++){
        printf("%d\t",destination[i]); //Print the new array which have values of the previous array
    }
    return 0;
}