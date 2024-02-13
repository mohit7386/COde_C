//Now we are learning the files I/O 
//File- It is nothing but a container in storage device (Hard disk) to store data 
//Volatile memory is a temporary memory which loss the data when the power is off or when you restart the computer....It is used to stored the data that needs to be quickly accessed and modified during the operation of a computer..EX- RAM 
//Non-volatile - It's a permanent memory it retains the stored data even when the power is off or when you restarred the computer...EX- ROM , SSD, Pen drive , Hard disk 
#include<stdio.h>
#include<string.h>
int main(){

    FILE *fptr; //File pointer is a hidden Structure that needs to be created for opening a file..
    fptr=fopen("Code103.c","r"); //fopen is a keyword which is used to opening a file and r is used to read the file you can only read the file
    char file[100];
    //Read and print each of the line till the end of the line 
    while(fgets(file,100,fptr)!=NULL){
        printf("%s",file);
    }
    fclose(fptr);
    return 0;
}
