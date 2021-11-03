#include<stdio.h>
#include <math.h>

int isPrime(int x);

 int main(){
    int x;
    scanf("%d",&x);
    isPrime(x);
    return 0;
    
}

int isPrime(int x){
for ( int i = 2; i <=(int)sqrt(x); i++)
{
    if (x%i==0)
    return 0;
    }
    return 1;
}
