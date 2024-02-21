//WAP to print all the letters in English alphabet using a Pointer and using the function.
//In this code having two different methods apko jo shi lage usko run karke dekh lo baaki rest ko comment kardo 
#include<stdio.h>
void printLetters(char letter);
int main(){
     char letter = 'a';
    char *ptr = &letter;
    // char letter = 'a';
    // char *ptr=&letter;
    // printf("All English Alphabets\n");
    // while (letter <= 'z')
    // {
    //   printf("%c\n",letter);
    //   (*ptr)++;
    // }
    //Here we are writing the same code using function..
    printLetters(letter);


    return 0;
}
void printLetters(char letter){
    char *ptr= &letter;
    printf("All English Alphabets\n");
    while (*ptr <= 'z')
    {
      printf("%c\n",letter); //Here you can also write the *ptr in place of letter because *ptr is nothing but the accessing the value of the letter so it will not through the error if you are writing the letter in place of *ptr or it's vice versa
      (*ptr)++;
    }

}
