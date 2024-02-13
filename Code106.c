//WAP to write the file we are changing the text with the help of writing in file.. 
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr=fopen("filetest.txt","w");//when we use write then write will del all the previous data and add the new data so we can use append 
    fprintf(fptr,"%c",'A'); //Write the character in our file 
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'E');
    fclose(fptr);
    return 0;
}