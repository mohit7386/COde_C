//WAP to print the concationation of the first and last name of the strings of aaray using function
#include<stdio.h>
void printString(char arr[]);
int main(){
    int i,j;
    char firstname[] = "MOHIT";
    char lastname[] = "PRATAP SINGH";
    char fullname[50]; // Assuming the size of the full name is of 50 max
    //Now Concatenate the first and last name of the string
    //Traversing the each element of the first name till we got the null character 
    for(i=0;firstname[i]!='\0';i++){
        fullname[i]=firstname[i]; //Transfering the value of the firstname to the full name 
    }
      fullname[i] = ' '; //Adding space between the first and last name of the string 
    i++; //Incremant the value of i because it is used to position the index for the next operation 
    for(j=0;lastname[j]!='\0';j++){//traversing the each element of the last name 
        fullname[i+j]=lastname[j]; //fullname[i+j] because we are Concatinating the String with first name and last name 
    }
    //Terminate the fullname String otherwise it will go in the Infinite loop because humne last name ko rokne ke liye to loop lagaya hai but fullname ko rokne ke liye koi loop nahi hai to isiliye hum full loop ko bhi terminate karayenge with null character..
    fullname[i+j]='\0'; //Here We are terminating the full name string after concatination because if we don't do this then it will go in the infinite loop..
    //Now call the function
    printString(fullname); //Calling the function
    return 0;
}
void printString(char arr[]){
    //Print the full name after concatination 
    printf("Your Full Name is:  ");
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
        printf(" "); //It Provides the space between the first and last name 
    }
    printf("\n");
}