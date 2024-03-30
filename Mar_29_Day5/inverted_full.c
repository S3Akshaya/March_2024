//inverted full pyramid

input : 3
 *  *  *  *  *
    *  *  *
       * 
   
#include<stdio.h>  
int main()  
{    
    int n,i,j,k,s=1;  
    scanf ("%d",&n);   
    for(i=n;i>=1;i--)  
    {  
        for(j=1;j<=s;j++)  
        {  
            printf("  ");
        }  
        for(k=1;k<=(2*i-1);k++)  
        {  
            printf("* ");
        }  
        s++;  
        printf("\n");  
    }  
}  
_________________________________________________________________________
