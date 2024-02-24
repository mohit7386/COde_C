//WAP to take the name as input from the user and print the length of the name using function
#include<stdio.h>
int countLength(char arr[]); //Creating the function for count length of the word
int main (){
    char name[50]; //Initialise the array with size= 50 
    fgets(name,50,stdin); //It takes the input from the user-It's a very safe use of fgets pls try to use always fgets in place of gets()...
     int length = countLength(name);
    if (length > 0 && name[length - 1] == '\n') {
        name[length - 1] = '\0';
    }

    printf("Length of your Entered Letter is: %d", length);
    return 0;
}
int countLength(char arr[]){
    int count=0; //humne yahan pe count ko zero rakha hai because jitna count chalega utna hi i chalega isiliye i=0 tha to count ko bhi zero rakha Count ki value bhi end me utni hi ho jaayegi jitni baar i chala hoga //Taking a counter variable for counting the values 
    for (int i=0;arr[i]!='\0';i++){ //Iterating all the values tb tak jab tak ki arr!='\0' nahi jo jaata 
        count++;// increment the counter variable with the increment in the ith variable //Jaise hi i ki value badhegi count ki value bhi 
    }
    return count; //Return count because the value is present in count variable so we are returning the value of count...-2 because remove the new line character 
}
//puts() automatically move the cursor to the next line....we don't need to put the \n when using puts()....