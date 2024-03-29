//reverse a string

#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int len = strlen(s);
	for (int i =0, j= len-1;i <= j;i++,j--) {
		char c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	printf("%s",s);
}


//fActorial of a number

#include<stdio.h>
int main(){
    int n,i;
    int fact = 1;
    printf("enter integer ");
    scanf("%d",&n);
    if (n < 0)
        printf("enter positive value");
    else {
        for (i =1;i<= n;i++) {
            fact *= i;
        }
        printf("factorial is  %d",fact);
    }
}


