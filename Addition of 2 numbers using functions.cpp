#include<stdio.h>
int add(int x,int y);
int main() {
	int a,b,r;
	printf("enter a,b values: ");
	scanf("%d%d",&a,&b);
	r=add(a,b);
	printf("%d",r);
	return 0;
} int add(int a,int b){
	int c;
	c=a+b;
	return c;
}
