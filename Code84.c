//Want to see the difference between character pointer and character array 
#include<stdio.h>
int main (){
    //We cannot change the value of the character array and we can only change the value of the character pointer it will not give you the error  
    char *str = "My Name is Mohit Pratap Singh"; //First Value of str is this 
    puts(str);
    //Now we are changing the value 
    str= "I am a Ryukendo and I have a trinity power"; //we can modify the value of the string in the character pointer but we cannot modify the value of the character array...
    puts(str);
    //Now we are creating the character array 
    char str1[]="Lucky Singh";
    puts(str1);
    //Now we are try to change the value of the str1 
    str1="Ryukendo"; //Here it will give you the error because you cannot change the value in the character array...If you want to run the code then comment this line of code then you will able to print the String value and you will see we are not able to change the value of the character array..
    puts(str1);
    return 0;
    //So the difference is we can change the value of our string in character pointer but we cannot change the value of the string in character array.. 
}