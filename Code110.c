//WAP to write all the odd numbers from 1 to n in a file.
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr=fopen("Newtestfile.txt","a"); //Here we are opening a file in the append mode 
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    fprintf(fptr,"\n");
    fprintf(fptr,"These are the odd number from 1 to %d which is successfully stored in the file using append mode that's why previous data is not deleted\n",n); //Passing the statement into the file with the help of fprintf
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\n",i); //fprintf(file pointer, format specifier, jo print karna hai yahan pe hume i print karna tha to isiliye i likha)
        }
    }
    fclose(fptr);
    printf("Odd Numbers from 1 to %d is added Successfully into your file!\n",n);
    return 0;
}