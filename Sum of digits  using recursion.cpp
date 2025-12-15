#include<stdio.h>
int sum(int n){
	if(n==0){
		return 0;
	} else {
	return (n%10)+sum(n/10);	
	}
} int main() {
	int n;
	printf("enter n value: ");
	scanf("%d",&n);
	int r=sum(n);
	printf("%d",r);
}
