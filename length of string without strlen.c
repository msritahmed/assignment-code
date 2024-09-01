#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<math.h>
void main()
 {
    int l=0;
    char a[10];
    printf("enter the string\n");
    gets(a); //also use scanf("%s",a);
             //fgets(a,10,stdin) takes the '\n' takes for count
     
     for(int i=0;a[i]!=0;i++)
     {
         l++;
     }
     printf("lenght of string:%d",l);
     
    
 }


//second method


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char a[10];
    int len;
    printf("enter the string\n");
    scanf("%s",a);
    
    len=t(a);
    printf("length of string is %d",len);
}
int  t(char * str)
{
    int l=0;
    while(*str!='\0')
    {
        l++;
        str++;
    }
    return l;
}

