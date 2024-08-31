#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int a,r=0,rem;
    printf("enter the number\n");
    scanf("%d",&a);
    while(a)
    {
        rem=a%10;  //remainder
        r=r*10+rem;
        a/=10;  //a=a/10(compound operator)
        
        
    }
    printf("reversed number %d\n",r);
    
}
