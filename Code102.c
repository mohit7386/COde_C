//WAP and create the structure and store the addresses of 5 peoples 
#include<stdio.h>
#include<string.h>
struct address{ //Declaring the structure of the address of the peoples     
    int houseNo;                                                                            
    int Block;
    char city[100];
    char state[100];
};
void printAddress(struct address adds); //Creating the function struct address with adds variable and when we use structure then we can only declare the function after the decleration of the structure..
int main(){
    struct address adds[5]; //Here we are storing the addresses of 5 peoples so we are taking the details of 5 peoples..
    printf("Enter the details of person1\n"); //Here we are taking the details of the diff. diff. persons
    scanf("%d",&adds[0].houseNo);
    scanf("%d",&adds[0].Block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

    printf("Enter the details of person2\n");
    scanf("%d",&adds[1].houseNo);
    scanf("%d",&adds[1].Block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

    printf("Enter the details of person3\n");
    scanf("%d",&adds[2].houseNo);
    scanf("%d",&adds[2].Block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

    printf("Enter the details of person4\n");
    scanf("%d",&adds[3].houseNo);
    scanf("%d",&adds[3].Block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

    printf("Enter the details of person5\n");
    scanf("%d",&adds[4].houseNo);
    scanf("%d",&adds[4].Block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);
    //Here we are calling the functions and priting the details of the 5 peoples...
    printAddress(adds[0]); 
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);
    printAddress(adds[4]);
}
void printAddress(struct address adds){
    printf("Address is: %d, %d,%s,%s\n",adds.houseNo,adds.Block,adds.city,adds.state);
}