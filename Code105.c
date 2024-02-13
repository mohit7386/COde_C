//Another Method to read a Whole file  
#include<stdio.h>
#include<string.h>
int main(){

    FILE *fptr; //File pointer is used to handle the file related operations 
    fptr=fopen("Code103.c","r"); //fopen is a keyword which is used to opening a file and r is used to read the file you can only read the file
    char ch;//Declares a character variable ch to store individual characters read from the file.
    //Read and print each of the line till the end of the line 
    ch=fgetc(fptr); //Reads the first character from the file using fgetc and stores it in the variable ch.
    while(ch!=EOF){ //Checking the condition when character is not equal to EOF 
        printf("%c",ch); //Printing the character Value 
        ch=fgetc(fptr); //read the new character and repeat the process 
    }
    printf("\n"); //Changing new line and give the space 
    fclose(fptr);
    return 0;
}