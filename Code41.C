//WAP to print 'Namaste' if the user is Indian and 'Bonjour' if the user is French..
#include<stdio.h>
void Namaste();
void Bonjour();
int main(){
printf("Enter Your Nationality I for Indian and F for French\n");
char ch;
scanf("%c",&ch);
if(ch=='i'){
    Namaste();
}
else if(ch=='f')
Bonjour();
else 
printf("Wrong Alphabet Entered Please Enter the Correct Alphabet\n");
return 0;
}
void Namaste(){ 
    printf("Namaste🙏 \n");
}
void Bonjour(){
    printf("Bonjour🙋\n");
}