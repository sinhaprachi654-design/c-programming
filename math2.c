/*write a program to do enter three digit no and find sum of digits,reverse the digit 
and check if palindrom and armstrong or not*/

#include<stdio.h>
int main()
{
    int N,d,H,r,t,o,result;
    printf("enter any three digit number");
    scanf("%d",&N);
    H=N/100;
    r=N%100;
    t=r/10;
    o=r%10;
    result=H+t+o;
    printf("sum=%d\n",result);
    result=100*o+10*t+1*H;
    printf("reverse=%d\n",result);
    if(result==N)
    printf("it is palindrom\n");
    else
    printf("it is not palindrom\n");
    result=H*H*H+t*t*t+o*o*o;
    if(result==N)
    printf("it is armstrong\n");
    else
    printf("it is not palindrom\n");
    return 0;
}