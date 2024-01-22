//WAP to print the numbers from 1 to 10 except 6..
#include<stdio.h>
int main(){
    for(int i=1; i<=10;i++){
        if(i==6){
            continue; //It skips the 6 and move to the next iteration.
        }
        printf("%d\n",i);
    }
    return 0;
}