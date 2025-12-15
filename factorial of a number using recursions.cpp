#include<stdio.h>
int factorial(int n);
int main() {
	int n,r;
	printf("enter n value: ");
	scanf("%d",&n);
	r=factorial(n);
	printf("%d factorial is = %d",n,r);
	return 0;
} 
int factorial(int n)
{
	 if(n>1)
	 {
	 	return n*factorial(n-1);
	 } 
	 else 
	 {
	 	return 1;
	 }
}
