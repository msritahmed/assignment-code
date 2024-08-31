#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int a,f;
    printf("enter the number\n");
    scanf("%d",&a);
    f=(a>0&&(a&(a-1)))==0;
    if(f==1)
    
    printf("power of 2\n");
    else
    printf("NOT power of 2\n");
    
}
