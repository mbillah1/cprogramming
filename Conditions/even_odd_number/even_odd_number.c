#include<stdio.h>

int main(){
    int input;

    printf("Enter Any Decimal Number : ");
    scanf("%d", &input);

    if(input%2 == 0){
        printf("%d is Even Number", input);
    }else{
        printf("%d is Odd Number", input);
    }

    return 0;
}
