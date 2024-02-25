//Write the function to count the occurences(means how many times something happens and occurs) of vowels in a String...
#include<stdio.h>
#include<string.h>
int countVowels(char str[]);
int main(){
    char str[100];
    printf("Enter the String:\n");
    scanf("%s",str);
    printf("Total No. of Vowels present in your string is: %d\n",countVowels(str));
    return 0;

}
int countVowels(char str[]){
    int count=0;
    printf("These are the Vowels Present in your String is: ");
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){ //Comparing with each element of the array and when match successful then the value of count will increase...
            count++;
            printf("%c",str[i]); //When we give the \n here then ye ek print karne ke baad line change karega baaki ek ko upr print karega ar baaki ke ko neeche print karega...Jab jab conditions true hogi ye print kara dega wo wo vowels ko..
        }
    }
    printf("\n");
    return count;
}