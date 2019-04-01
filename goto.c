//goto
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    int i=0,sum=0;
    start_N:
    i++;
    sum+=i;
    printf("%d", i);
    if (i < 10)
    {
        printf("+");
        goto start_N;
    }
    printf("=%d\n", sum);
    return 0;
}