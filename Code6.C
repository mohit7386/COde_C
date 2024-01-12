#include<stdio.h>
int main(){
    char character;
    printf("Enter any Character or Digit you want\n");
    scanf("%c",&character);
    if(character>='0'&& character<='9'){
        printf("%c is a digit!",character);
    }
    else{
        printf("It's a Character!");
    }
    return 0;
}