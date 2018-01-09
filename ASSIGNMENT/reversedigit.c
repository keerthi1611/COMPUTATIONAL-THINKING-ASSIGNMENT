#include <stdio.h>

int main() {

int n,i,a[10],count=0,rev=0,rem;
scanf("%d",&n);
printf("%d\n",n);
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;

}
printf("reverse=%d",rev);
    return 0;
}
