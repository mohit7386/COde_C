//WAP to replace the data in a file qa with the number of vowels
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr=fopen("qa.txt","r");
    char str[100];
    if(fgets(str,100,fptr)!=NULL)
    {
      printf("Previous Data is: %s\n",str);
    }
    fclose(fptr);
    fptr=fopen("qa.txt","w");
    char str2[100];
    fprintf(fptr,"Vowels are: 'a'\n",str2);
    fprintf(fptr,"Vowels are: 'e'\n",str2);
    fprintf(fptr,"Vowels are: 'i'\n",str2);
    fprintf(fptr,"Vowels are: 'o'\n",str2);
    fprintf(fptr,"Vowels are: 'u'\n",str2);
    fclose(fptr);
return 0;
}