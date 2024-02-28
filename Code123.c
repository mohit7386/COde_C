#include<stdio.h>
int main(){
  FILE *fptr;
  fptr=fopen("Code124.c","r");
  char file[100]; //Creating the array of size 100 
  if(fptr==NULL){ //Checking the condition if you are trying to print the file which is not exist then this message will print 
    printf("This File doesn't exist\n");
  }
  while(fgets(file,100,fptr)!=NULL){ //Always use while if you want to print the whole file data and always use fgets if you want to print the data of the file as it is same as written in the file 
    printf("%s",file);
  }
  fclose(fptr);
  return 0;
}