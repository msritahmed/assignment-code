#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int a,b;
    
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
    printf("before swapping %d and %d\n",a,b);
    
     a=a^b;       //BITWISE XOR OPERATION
      b=a^b;
       a=a^b;
    
     printf("after  swapping %d and %d\n",a,b);
}
