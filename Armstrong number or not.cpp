#include<stdio.h>
#include<math.h>
int main() {
	int n,s=0,r=0,t;
	printf("enter n value: ");
	scanf("%d",&n);
	t=n;
	while(n>0){
		r=n%10;
		n=n/10;
		s=s+r*r*r;
	} if(t==s){
		printf("a Armstrong number");
	} else{
		printf("not a Armstrong number");
	}

	return 0;
}
