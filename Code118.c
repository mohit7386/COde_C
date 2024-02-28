//WAP to allocate the memory of n size, Where n is entered by the user
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the Value of n\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int * )calloc(n,sizeof(int)); //here we cannot multiply the size of int to the n because it's a calloc not a malloc in calloc we cannot multiply....where n is our no of locations you want and size of int is the per location size...
    if(ptr==NULL){ //In Case of any kind of failure then this statement will print 
        printf("Memory Allocation failed");
    }
    printf("Memory dynamically allocated successfully and initialise with zero because of calloc \n");
    for(int i=0;i<n;i++){ //Running a loop for priting the values of ptr which is zero because in calloc the initialisation of the values is already zero.
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
    //malloc will not give you the gurantee ki zero hi aayega but calloc give you the gurantee agar aap calloc use karenge to hr br zero hi aayega output me 
}