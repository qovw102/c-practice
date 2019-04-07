//while loop
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i=1,sum=0;
    while(sum<=100)
    {
        sum+=i;
        printf("1~%d=%d\n",i,sum);
        i++;
    }
}