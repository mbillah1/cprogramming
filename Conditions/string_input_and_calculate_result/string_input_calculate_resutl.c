#include<stdio.h>
#include<string.h>

int main(){

    int roll;
    char name[25];

    printf("Enter Student Roll: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
	scanf("%25s",&name);

    printf("Your Roll is: %d \n", roll);

	printf("Name is: %s\n",name);



    return 0;
}
