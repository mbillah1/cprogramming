#include<stdio.h>

int main(){

    char name[100];
    int roll;

    printf("Enter Your Full Name: ");
    scanf("%[^\n]", &name);

    printf("Enter Your Roll: ");
    scanf("%d", &roll);


    printf("Your Name is : %s\n", name);
    printf("Your Roll is: %d", roll);

    return 0;
}
