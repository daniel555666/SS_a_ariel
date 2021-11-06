#include<stdio.h>
#include"NumClass.h"

int main(){
    int x1;
    int x2;
    scanf("%d%d",&x1,&x2);
    if(x2<x1){
        int temp=x1;
        x1=x2;
        x2=temp;
    }
    printf("The Armstrong numbers are:");
    for (int i = x1; i <= x2; i++)
    {
     int t=isArmstrong(i);
     if(t!=0)
     printf(" %d",i); 
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = x1; i <= x2; i++)
    {
     int t=isPalindrome(i);
    // printf("%d",t);
     if(t!=0)
     printf(" %d",i); 
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i = x1; i <= x2; i++)
    {
     int t=isPrime(i);
     if(t!=0)
     printf(" %d",i); 
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i = x1; i <= x2; i++)
    {
     int t=isStrong(i);
     if(t!=0)
     printf(" %d",i); 
    }
    printf("\n");

    return 0;
}