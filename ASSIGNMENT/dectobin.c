#include <stdio.h>

int main() {
	int i,n,a[100],bv=1,dv=0,rem;
	scanf("%d",&n);
	while(n>0)
	{
	    rem=n%10;
	    dv=dv+rem*bv;
	    n=n/10;
	    bv=bv*2;
	    
	}
	printf("%d",dv);
		return 0;
}
