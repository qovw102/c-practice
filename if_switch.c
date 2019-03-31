//if
#include<stdio.h>

int main(void)
{
    int number=0;

    printf("Please enter a number:\n");
    scanf("%d", &number);
    if (number>0)
        printf("Number:%d > 0",number);
    else
        printf("Number:%d < 0",number);
    

}
