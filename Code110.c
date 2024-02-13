//WAP to write all the odd numbers from 1 to n in a file.
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr=fopen("Newtestfile.txt","a");
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    fprintf(fptr,"These are the odd number from 1 to %d stored in the appended mode in the file\n",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\n",i);
        }
    }
    fclose(fptr);
    return 0;
}