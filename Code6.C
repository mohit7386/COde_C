#include<stdio.h>

int main(){
    char character;
    printf("Enter any Character or Digit you want\n");
    scanf("%c", &character);

    if(character >= '0' && character <= '9'){
        printf("%c is a digit!", character);
    }
    else if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
        printf("%c It's a Character!", character);
    }
    else{
        printf("%c It's a Special Character...", character);
    }

    return 0;
}
