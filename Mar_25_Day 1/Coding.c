// swap two numbers
#include <stdio.h>
int main()
{
    int x, y;
    printf("value of x ");
    scanf("%d", &x);
    printf("\n value of y ");
    scanf("%d", &y);
    int t = x;
    x = y;
    y = t;
    printf("\n x = %d, y = %d", x, y);
}




// reverse the digit

#include <stdio.h>
int main(){
    int n, rev = 0, rem;
    printf("Enter the number");
    scanf("%d", &n);    
    while (n != 0){

        rem = n% 10;
        rev = rev * 10 + rem;
        n = n/10;

    }    
    printf("reversed number: %d", rev);
}
