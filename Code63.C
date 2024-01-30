//Now we are learning the very fresh topic -> Array 
//Collections of elements of same data type under a Single name are called array. These elements are stored in Contiguous memory location and each element are accessed by using an index value.
//We can Only Store similar data types..Array cannot store the elements of two different data types:-
//When you want to store the multiple elemets of same data type then we use array..
#include<stdio.h>
int main(){
    int marks[6]= {60,50,80,96,87,99};
    printf("Marks of Hindi is:- %d \n",marks[0]);
    printf("Marks of English is:- %d\n",marks[1]);
    printf("Marks of Sanskrit is:- %d\n",marks[2]);
    printf("Marks of Coding is:- %d\n",marks[3]);
    printf("Marks of DBMS is:- %d\n",marks[4]);
    printf("Marks of GIT & GITHUB is:- %d\n",marks[5]);
    return 0;
}