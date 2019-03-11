#include<stdio.h>
//#include<stdlib.h>

int main(void)
{
    int sum,s=32767;
    float f=123.4567890123;

    sum=s+1;
    printf("sum+1= %d\n",sum);
    sum=s+2;
    printf("sum+2= %d\n",sum);
    printf("sizeof sum is %d\n",sizeof(sum));
    printf("float f = %e\n",f);

    //system("pause");
    return 0;
}