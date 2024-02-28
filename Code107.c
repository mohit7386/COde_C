//WAP to add something in the new file and previous data will not lost 
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    //Here we append the character which means we are adding the data with the existing data...Previous data will not be deleted 
    fptr=fopen("filetest.txt","a");//when we use write then write will del all the previous data and add the new data so we can use append with the help of append your previous data will not be deleted...new data is adding to the previous data 
    //char str[100]="\nThis is the new line added into your file\n";
    //fputs(str,fptr);
    fprintf(fptr,"%s","\nMango is very tasty and you can also make mango chutney!\n");
    fprintf(fptr,"%c",'M'); //Write the character in our file 
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');
    printf("\t");
    fclose(fptr);
    printf("New Data is added into the file\n");
    return 0;
}