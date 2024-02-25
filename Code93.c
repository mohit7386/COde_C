//WAP to convert all lowercase vowels into uppercase in a string using function
#include<stdio.h>
#include<string.h>
void convertIntoUppercase(char str[]);
int main(){
    char str[200];
    printf("Enter the String\n");
    fgets(str,200,stdin);
    convertIntoUppercase(str);
    printf("All Vowels is Converted into the Uppercase: %s\n",str);//return type void jab hota hai to printf me call nhi karte hain function ko hamesha pehle call krke fr print krte hain 
    return 0;
} 
void convertIntoUppercase(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){ //Checking the whole string and stop comparing when match found..
            str[i]=str[i]-32; //If str[i] is 'a' (ASCII 97), then str[i] - 32 becomes 'A' (ASCII 65).
            // If str[i] is 'e' (ASCII 101), then str[i] - 32 becomes 'E' (ASCII 69).
// If str[i] is 'i' (ASCII 105), then str[i] - 32 becomes 'I' (ASCII 73).
// If str[i] is 'o' (ASCII 111), then str[i] - 32 becomes 'O' (ASCII 79).
// If str[i] is 'u' (ASCII 117), then str[i] - 32 becomes 'U' (ASCII 85).
//It means the difference between the ASCII Values of uppercase and lowercase is 32 that's why we are subtracting the 32 in our Logic...
        } 
    }
}