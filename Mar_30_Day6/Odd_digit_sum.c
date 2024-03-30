//add all odd dig in a num and return lucky if the sum is EVEN
input 351
output  not lucky
reason (3+5+1)=9 (which is odd)

input 211
ouput " lucky " 
  (1+1 ===== 2 (which is even))

#include<stdio.h>
int main(){
    int n,d,s;
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        if(d%2!=0){
            s+=d;
        }
        n/=10;
    }
    if(s%2==0){
        printf("lucky number");
    } 
    else{
        printf("not lucky number");
    }
}

-----------------------------------
