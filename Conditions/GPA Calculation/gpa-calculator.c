#include<stdio.h>

int main(){

    int marks;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if(marks >=0 && marks <=32){
        printf("Your Marks is %d and You are Fail");
    }else if(marks >= 33 && marks <=39){
        printf("Your marks is %d and You Got: D", marks);
    }else if(marks >=40 && marks <=49){
        printf("Your Marks is %d and You Got: C", marks);
    }else if(marks>=50 && marks <= 59){
        printf("Your Marks is %d and You Got: B", marks);
    }else if(marks >=60 && marks<=69){
        printf("Your Marks is %d and You Got: A-", marks);
    }else if(marks >=70 && marks <=79){
        printf("Your Marks is %d and You Got: A", marks);
    }else if(marks >= 80 && marks<=100){
        printf("Your Marks is %d and You Got: A+", marks);
    }else{
        printf("Your Marks %d is invalid.", marks);
    }

    return 0;
}
