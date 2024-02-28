//WAP to replace the data in a file qa with the number of vowels
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    //In this code we are opening the same file at two times 
    fptr=fopen("qa.txt","r"); //Here we are opening a file in read mode only we want to read the data....after reading we are copying or printing the previous data and added into the new one 
    char str[100]; //Creating an array of characters whose size is 100 which is used to store all the data present in the file 
    printf("Previous Data is:-\n");
    while(fgets(str,100,fptr)!=NULL)
    {
      printf("%s\n",str);
    }
    fclose(fptr);
    fptr=fopen("qa.txt","w");
    fprintf(fptr,"New Data added in the file:\n");
    fprintf(fptr,"Vowels are: 'a'\n");
    fprintf(fptr,"Vowels are: 'e'\n");
    fprintf(fptr,"Vowels are: 'i'\n");
    fprintf(fptr,"Vowels are: 'o'\n");
    fprintf(fptr,"Vowels are: 'u'\n");
    fclose(fptr);
return 0;
}