#include<stdio.h>

int main(){

    int num1, num2;

    printf("Enter the value of number 1 : ");
    scanf("%d", &num1);

    printf("Enter the value of number 2 : ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d is Maximum Number", num1);
    }else if(num1<num2){
        printf("%d is Maximum Number", num2);
    }else{
        printf("Number One & Number Two is equal");
    }

    return 0;
}
