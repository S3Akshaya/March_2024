//inverted left half pyramid

input 4:
 * * * *
   * * *
     * *
       *
   
#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(k=0;k<n-i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

_________________________________________________
