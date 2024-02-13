//WAP to add something in the new file and previous data will not lost 
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    //Here we append the character which means wwe are adding the data with the existing data...Previous data will not deleted 
    fptr=fopen("filetest.txt","a");//when we use write then write will del all the previous data and add the new data so we can use append 
    fprintf(fptr,"%c",'A'); //Write the character in our file 
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'E');
    printf("\t");
    fclose(fptr);
    return 0;
}