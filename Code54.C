//WAP to calculate the percentage of the student on the basis of marks of three subjects - maths , science , sanskrit Using Functions...
#include<stdio.h>
float calculatePercentage( float mm , float sm , float snm);
int main (){
    float mm , sm ,snm;
    printf("Enter the marks of maths\n");
    scanf("%f",&mm);
    printf("Enter the marks of Science\n");
    scanf("%f",&sm);
    printf("Enter the marks of Sanskrit\n");
    scanf("%f",&snm);
    printf("The Percentage of the maths , science and sanskrit is: %f\n",calculatePercentage(mm,sm,snm));
    return 0;
} 
//It's a Simple recursive program in this program function does not call itself....
float calculatePercentage( float mm , float sm , float snm){
    if(mm==0 && sm==0 && snm==0){
        return 0;
    }
    else{
    float obtainedmarks = mm+sm+snm;
    float totalMarks = 300;
    float percentage = (obtainedmarks/totalMarks)*100;
    return percentage;
}
}