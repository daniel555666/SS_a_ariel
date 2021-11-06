#include<stdio.h>
#include <math.h>
int factorial (int x);

int isPrime(int x){
for ( int i = 2; i <=(int)sqrt(x); i++)
{
    if (x%i==0)
    return 0;
    }
return 1;
}
int isStrong (int x){
 int sum=0;
 int temp=x;
 if (x==0)
    return 0;
 
 while (temp!=0)
 {
     sum=sum+factorial(temp%10);
      temp=temp/10;
 }
 if (sum!=x){
    return 0;
 }
 return 1;
 
 
}

int factorial (int x){
    int sum=1;
    for (int i =2 ; i <= x; i++)
    {
        sum=sum*i;
    }
    return sum;
}
