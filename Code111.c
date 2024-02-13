//WAP to read a string from a file & Output to the user 
#include<stdio.h>
#include<string.h>
int main (){
    FILE *fptr;
    fptr=fopen("readstring.txt","r");
    char str[100];
    if(fgets(str,100,fptr)!=NULL)
    {
      printf("String is: %s\n",str);
    }
    else{
    printf("Error Loading the String from the file\n");
    }
    fclose(fptr);
   
    return 0;
}