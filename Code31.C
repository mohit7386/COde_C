//Here we learn how continue will work.....
//Continue -> If we want to skip the some set of lines of code and move to another Iteration then we use continue..let's do the example 
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==4){ //Will break the loop when it is true
            continue; //Skip the current true condition not whole....rest will work 
        }
         printf("%d\n",i);//Here we skip the number 4 and print the rest numbers this is the working of continue it will skip the current statement and continue print the rest of the Numbers but break will terinate all the statements below 
    }
    return 0;
}