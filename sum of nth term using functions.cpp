#include<stdio.h>
int nth_term(int a,int b,int c,int n);
int main() {
	int a,b,c,n,r;
	printf("enter a,b,c values: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n enter nth term:");
	scanf("%d",&n);
	r=nth_term(n,a,b,c);
	printf("\n%d",r);
	return 0;
} int nth_term(int n,int a,int b,int c){
	int s,i;
	for(i=1;i<=n;i++){
		s=a+b+c;
		a=b;
		b=c;
		c=s;
	}
	return s;
}
