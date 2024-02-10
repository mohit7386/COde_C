//Write a function named slice, which takes a string & return a sliced string from index m to n..
#include<stdio.h>
#include<string.h>
void slice(char str[],int m, int n);
int main(){
    char str[100]; //Declaring the String 
    printf("Enter any String you want to slice:\n");
    fgets(str,100,stdin); //Yahan hum directly input le lenge values ka bina kisi loop ke pehle ke questions me array ka input hum lete the loop ki help se but yahan hum array ka input lenge directly because The primary reason is that %s in scanf reads a sequence of characters until it encounters whitespace (space, tab, or newline). So, it works well for taking input of a single-word string. When you use %s with scanf, it automatically handles the traversal and input process without the need for an explicit loop.
    int m ,n;
    printf("Enter the value of m: \n");
    scanf("%d",&m);
    printf("Enter the value of n but bigger then m: \n");
    scanf("%d",&n);
    slice(str,m,n); //Calling the function
    return 0;
}
void slice(char str[],int m, int n){
    int j=0;
    char newstr[100]; //here we are creating the new string in which we are storing the value of the sliced String
    for(int i=m-1;i<n;i++,j++){
        newstr[j]=str[i]; //We are transfer the updated sliced string in the new string 
    }
    newstr[j]='\0'; //Terminating the String
    printf("Your Sliced String is: %s\n",newstr); //Printing Your sliced string 
}