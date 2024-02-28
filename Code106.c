//WAP to write the file we are changing the text of the file with the help of write method in the file and in this method your all the previous data is lost and new data will add into your file.. 
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr=fopen("filetest.txt","w");//when we use write then this method will delete all the previous data and add the new data in our file
    fprintf(fptr,"%c",'A'); //we are updating the new data in our file 
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'E');
    fclose(fptr); //After all the work is done always need to close the file 
    return 0;
}