//Here we are learning about "Recursion" how it works , how to code in it...
//WAP to print the Hello World n times as per the user wants 
#include<stdio.h>
void helloWorld(int n);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    helloWorld(n);
    return 0;
}
//It's a recursive Function 
void helloWorld(int n){
    if(n==0){ //here if n==0 then kuch print nhi krana hai yahan humne apni base condition use ki yahan recursion ko stop kar diyaa with the help of base condition.
        return;
    }
    printf("Hello World I am Learning Recursion!\n");//ek baar to iss function ne print kara diya hello world ko but bar bar print karane ke liye khud ko call krta hai 
    helloWorld(n-1); //It is used to decrementing the value till we get 0
//here function calls itself and we are writing (n-1) because if we do not write this thing then our recursive function will go in infinite loop..Kyuki agar hum (n-1) nahi likhenge to jo value minus hoke aayegi wo to check hogi hi nahi ar check nhi hogi to har baar true condition milegi to wo har baar print karata rahega..aur jab (n-1) agar hum de diye to ye check karega condition aur zero milne ke baad ruk jaayega... 
}