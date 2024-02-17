//WAP to print the 7 days name using switch case
#include<stdio.h>
int main(){
    int day;
    printf("Enter any day (1-7)\n");
    scanf("%d",&day);
    switch (day) //Here we can only put the character or number 
    {
    case 1: printf("Sunday\n");
        break; //Break is used to terminate the condition of case...if you are not using the break then next condition also prints and so on....
     case 2: printf("Monday\n");
        break;
     case 3: printf("Tuesday\n");
        break;
     case 4: printf("Wednesday\n");
        break;
     case 5: printf("Thursday\n");
        break;
     case 6: printf("Friday\n");
        break;
     case 7: printf("Saturday\n");
        break;    
    
    default: printf("You are Entering the Wrong Day\n");
        break;
    }
}