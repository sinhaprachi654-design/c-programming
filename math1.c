//write a program to find sum,subtract,multiply,divide and modulo division of any two number.
#include<stdio.h>
int main()
{
    int a,b,ANS;
    printf("a,b\n");
    scanf("%d%d",&a,&b);
    ANS= a+b;
    printf("sum=%d\n",ANS);
    ANS=a-b;
    printf("subtract=%d\n",ANS);
    ANS=a*b;
    printf("multiply=%d\n",ANS);
    ANS=a/b;
    printf("divide=%d\n",ANS);
    ANS=a%b;
    printf("remainder=%d\n",ANS);
    ANS=a^b;
    printf("XOR=%d\n",ANS);
    if(a>b)
    printf("%d is greater than %d",a,b);
    else
    printf("%d is greater than %d", b,a);
    
return 0;
}