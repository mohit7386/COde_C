//another library function of string 
#include<stdio.h>
#include<string.h>
int main(){
    char arr1[]="Mohit"; //Initialise the array with the string 
    char arr2[]="Lucky";
    strcpy(arr1,arr2); //Used to copy the value of one string to another and here the calue of arr2 is copied in the arr1
    puts(arr1); 
    char arr3[100]="Mohit Pratap "; //We are giving the size 100 because dono string the values store ho sake Capacity Increase ho jisse jaa paaye arr3 mein..
    char arr4[]="Singh";
    strcat(arr3,arr4); //Used for concate the Strings means merging the Strings 
    puts(arr3);//Prints the value of arr1
    return 0;
}