#include<stdio.h>
void england(){
 printf("\nYou are an England");
    return;
}
void australia(){   
 printf("\nYou are australia");
 england();
    return;
}
void india(){
    printf("\nYou are indian");
 australia();
    return;
}   
int main(){
       india();
    return 0;
}