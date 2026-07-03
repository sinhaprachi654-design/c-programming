/*write a program to enter principal,ROI and TIME to find amount and simple interest. */

#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,amt;
    printf("PRINCIPAL= ");
    scanf("%f",&p);
    printf("\nRATE INTEREST= ");
    scanf("%f",&r);
    printf("\nTIME= ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("\nsimple interest=%f",si);
    amt=p+si;
    printf("\namount=%f" ,amt);
    return 0;
}