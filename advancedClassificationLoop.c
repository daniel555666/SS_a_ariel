#include<stdio.h>
#include<math.h>
int isArmstrong(int x);
int isPalindrome(int x);


int isArmstrong(int x){
    int length=0;
    int temp=x;
    int sum=0;
    
    while(temp!=0){
        temp=temp/10;
        length++;
    }
    temp=x;
    while(temp!=0){
      sum=sum+pow(temp%10,length);
      temp=temp/10;    
    }

   if(x==sum)
     return 1;
   return 0;
    
}

int isPalindrome(int x){
    int temp =x;
    int revers=0;
    while(temp!=0){
        revers=temp%10+revers*10;
        temp=temp/10;
    }
    if (revers==x)
        return 1;
    return 0;    
}