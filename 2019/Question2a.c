#include<stdio.h>
//completed

int main(void)
{
    int fib[10]= {0, 1};
    int i, j;

    for(i=0; i<8; i++)
    {
        fib[i+2] = fib[i] + fib[i+1];
        printf("%d = %d + %d\n", fib[i+2], fib[i], fib[i+1]);
    }

    return 0;
}
