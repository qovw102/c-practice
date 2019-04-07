//while loop
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{
    // int i=1,sum=0;
    // while(sum<=100)
    // {
    //     sum+=i;
    //     printf("1~%d=%d\n",i,sum);
    //     i++;
    // }

    //infinite while loop
    char ch;
    while(ch!=113)
    {
        ch=getch();
        printf("ASCII of key %c=%d\n",ch,ch);
    }
    printf("You have press q to exit the loop\n");
}