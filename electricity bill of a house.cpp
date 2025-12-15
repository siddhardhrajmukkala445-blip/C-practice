#include<stdio.h>
int  main() {
	int a,b;
	printf("enter a,b values: ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a=%d and b=%d",a,b);
	return 0;
}
