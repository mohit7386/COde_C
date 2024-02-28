//WAP to write in the file 
#include<stdio.h>
#include<string.h>
int main(){

    FILE *fptr; //File pointer is a hidden Structure that needs to be created for opening a file..
    fptr=fopen("Code103.c","w"); 
    
    fprintf(fptr,"%s","Mohit Pratap Singh");
    fclose(fptr);
    return 0;
}