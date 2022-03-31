#include<stdio.h>

int main(){

    char input;

    printf("Enter Any Character : ");
    scanf("%c", &input);

    if(input == 'a' || input == 'A' || input == 'e' || input == 'E' || input== 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U'){
        printf("You Enter Vowel");
    }else{
        printf("You enter consonant");
    }

    return 0;
}
