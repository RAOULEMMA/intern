#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,dec;
    do{
    printf("welcome to our program\n");
    printf("our program can take numbers and display whether the are odd or even\n\n");
    printf("enter the number you want to check\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is an even\n",num);
    }
    else{
         printf("%d is an odd number\n\n",num);
    }
    printf("do you want to check for another number?: \n");
    printf("enter 1 if you agree\n");
    scanf("%d",&dec);
    }while(dec==1);
    return 0;
}
