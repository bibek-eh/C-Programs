#include<stdio.h>

void prime(int n);


int main(int n){
    
    // prime(5);
    // prime(10);
    // prime(3);
    // prime(50);
    printf("Enter Any number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}


void prime(int n){
    int c=0,i;
    for(i=1; i<=n; i++){
        if (n%i==0){
                c++;
            }
    }
    if(c==2){
        printf("%d is prime number\n",n);
    }
    else{
        printf("%d is composite number\n",n);
}
}