#include<stdio.h>
int main() {
	int n,s=0,r=0;
	printf("enter n value: ");
	scanf("%d",&n);
	int k;
	k=n;
	while(n!=0){
		r=n%10;
		n=n/10;
		s=s*10+r;
	} printf("\n %d",s);
	if(k==s){
		printf("a Palindrome");
	} else {
		printf("Not a Palidrome");
	}
	return 0;
}
