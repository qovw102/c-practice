//switch
#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int a,b;
    char oper;
    //Enter two numbers and do some caluate
    printf("Please enter formula(3+2): ");
    scanf("%d %c %d", &a, &oper, &b);
    switch (oper)
    {
        case '+':/* constant-expression */
            /* code */
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case '/':
            printf("%d / %d = %d\n", a, b, a/b);
            break;
        default:
            printf("Unrecognize formula\n");
            break;
    }
    return 0;
}