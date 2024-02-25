//Write a function named slice, which takes a string & return a sliced string from index m to n..
#include<stdio.h>
#include<string.h>
void slice(char str[],int m, int n);
int main(){
    char str[100]; //Declaring the String 
    printf("Enter any String you want to slice:\n");
    fgets(str,100,stdin); //Taking the input from the user 
    int m ,n;
    printf("Enter the value of m: \n");
    scanf("%d",&m);
    printf("Enter the value of n but bigger then m: \n");
    scanf("%d",&n);
    slice(str,m,n); //Calling the function
    return 0;
}
void slice(char str[],int m, int n){
    int j=0; //Used to tracking the elements of the newstr[100]...
    char newstr[100]; //here we are creating the new string in which we are storing the value of the sliced String......
    //newstr ke liye loop chalayenge ab jitni string hume user ke according slice karni hai utne se start karenge..
    for(int i=m-1;i<n;i++,j++){//here we are incrementing the value of j because move to the next position in the string...i=m-1 is used to decrement the value of the position because array indexing starts from 0 that's why when we write m-1 then it takes the correct value according to the index
        newstr[j]=str[i]; //We are transfer the updated sliced string in the new string 
    }
    newstr[j]='\0'; //Terminating the String
    printf("Your Sliced String is: %s\n",newstr); //Printing Your sliced string 
}