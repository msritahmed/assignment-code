#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<math.h>
void main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    int c=0;
    
    while(a)
    {
        c=c+(a&1);//bitwise AND
        a=a>>1;   //shift right
        
    }
    
    printf("set bits are %d",c);
    
}
