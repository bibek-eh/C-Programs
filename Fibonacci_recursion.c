#include <stdio.h>

int fibo(int);

void main(){
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Fibonacci series upto %d terms :\n", n);
    for (i = 0; i < n; i++)
{
        printf("%d\t", fibo(i));
    }
}

int fibo(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
