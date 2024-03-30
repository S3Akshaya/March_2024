//power of a num without pow() function

input 
2 (base)
3 (power)

output
8
------------
#include<stdio.h>
int main()
{
    int b,p,r=1;
    scanf("%d%d",&b,&p);
    while(p!=0) 
    {
        r=r*b;
        p--;
    }
    printf("%d",r);
}
