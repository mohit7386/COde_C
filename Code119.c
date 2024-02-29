//WAP to free the memory which is reserved by the calloc and malloc 
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the Value of n\n");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*)calloc(n, sizeof(int)); // Memory allocation for n integers

    if(ptr == NULL) {
        printf("Memory Allocation failed");
        return 1; // Exit the program if memory allocation fails
    }

    printf("Memory dynamically allocated successfully and initialized with zero because of calloc \n");
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]); // Displaying the values of the allocated memory
    }

    free(ptr); // Deallocating the memory

    ptr = (int*)calloc(4, sizeof(int)); // Reallocating memory for 4 integers

    if(ptr == NULL) {
        printf("Memory Allocation failed");
        return 1; // Exit the program if memory allocation fails
    }

    printf("After Using free(ptr) only 4 locations of memory are reserved, and the rest are free.\n");

    for(int i = 0; i < 4; i++) {
        printf("%d\n", ptr[i]); // Displaying the values of the reallocated memory
    }

    free(ptr); // Deallocating the memory

    return 0;
}
