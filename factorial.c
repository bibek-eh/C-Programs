#include <stdio.h>

int fact(int);

int main() {
int n;
char ch;
    do{
        printf("Enter any positive integer: ");
        scanf("%d",&n);
        printf("The factorial of %d is %d\n",n,fact(n));
        printf("Do you want to find factorial of another integer?(y/n): ");
        scanf(" %c",&ch);
    }while(ch == 'y' || ch == 'Y');

}

int fact(int n){
    int i,f=1;
    for(i=1; i<=n; i++){
        f*=i;
    }
    return f;
}

