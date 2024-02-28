//WAP to read a string from a file & Output to the user means output into the terminal 
#include<stdio.h>
#include<string.h>
int main (){
    FILE *fptr; //Initialise the file pointer 
    fptr=fopen("readstring.txt","r"); //Opening a file into read mode 
    char str[100];
    if(fgets(str,100,fptr)!=NULL) //taking the elements of the file and printing till the elements is not equal to NULL 
    {
      printf("Data in your file is: %s\n",str);
    }
    else{
    printf("Error Loading the String from the file\n");
    }
    fclose(fptr);
   
    return 0;
}