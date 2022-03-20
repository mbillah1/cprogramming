#include<stdio.h>

int main(){

    int x, y, sum, mul, dev, mod;

    printf("Enter the Value of x: ");
    scanf("%d", &x);

    printf("Enter the Value of y: ");
    scanf("%d", &y);

    sum = x + y;
    printf("%d + %d = %d\n", x, y, sum);

    mul = x * y;
    printf("%d * %d = %d\n", x, y, mul);

    dev = x / y;
    mod = x % y;

    printf("%d / %d = %d and Remaining %d", x, y, dev, mod);


    return 0;
}
