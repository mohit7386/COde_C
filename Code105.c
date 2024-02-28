//Another Method to read a Whole file  
#include<stdio.h>
#include<string.h>
int main(){

    FILE *fptr; //File pointer is used to handle the file related operations 
    fptr=fopen("filetest.txt","r"); //fopen is a keyword which is used to opening a file and r is used to read the file you can only read the file
    char ch[100];//Declares a character array ch to store and print the whole file.
    //Read and print each of the line till the end of the line 
    /* It is used to read the input from a file */
    printf("All the data of the file:-\n");
    if(fgets(ch,100,fptr)!=NULL){ //Always use this method for printing the data of the file because it will print the data of your as it is data written in your file...aur yahan pe if use kiya hai kyuki file me ek hi line hai multiple lines ye read nhi karega because humne array liya hai aur har ek element tak traverse karane ke liye hum loop lagayenge...using while always 
    printf("%s",ch); //printing the data of the file 
    } //printing the whole data of the file 
    fclose(fptr);
    return 0;
}