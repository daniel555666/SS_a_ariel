#include<stdio.h>
#include<math.h>
int isArmstrong2(int x,int length);
int isPalindrome2(int x,int length);
int getLength(int x);

int isArmstrong(int x){
    int length=getLength(x);
    
    if(isArmstrong2( x, length)==x)
     return 1;
    return 0;   

}
int isArmstrong2(int x,int length){
   if(x==0)
     return 0;
   return pow(x%10,length)+isArmstrong2(x/10,length);
}
int isPalindrome(int x){
    int length=getLength(x);
    int y=isPalindrome2(x,length);
    return y;

}
int isPalindrome2(int x,int length){
    if (length==1||length==0)
        return 1;
    if(x%10!=x/(int)pow(10,length-1))    
      return 0;
    return isPalindrome2((x%(int)pow(10,length-1))/10,length-2); 
     
}

int getLength(int x){
   int length=0;
    
    while(x!=0){
        x=x/10;
        length++;  
    }
    return length;
}
