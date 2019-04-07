//for loop
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // int i,sum=0;
    // for(i=1;i<=10;i++)
    // {
    //     sum+=i;
    // }
    // printf("1+2+3+...10=%d\n",sum);

    int i,count=0;

    for(i=1;i<=10000;i++)
    {
        if((rand()%6+1)==3)
        count++;
    }
    printf("3 appear %d times\n",count);
    printf("the probability is %.3f\n",(float)count/10000);

    return 0;
}