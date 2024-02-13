//WAP to write in the file 
#include<stdio.h>
#include<string.h>
int main(){

    FILE *fptr; //File pointer is a hidden Structure that needs to be created for opening a file..
    fptr=fopen("Code103.c","w"); 
    char file[100];
    while(fgets(file,100,fptr)!=NULL){
        printf("%s",file);
    }
    fprintf(fptr,"Mohit Pratap Singh");
    fclose(fptr);
    return 0;
}