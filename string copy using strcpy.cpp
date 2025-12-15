#include<stdio.h>
#include<string.h>
int main() {
	char x[20],y[20];
	printf("enter x: ");
	gets(x);
	strcpy(y,x);
	printf("\n destination string y is %s",y);
	return 0;
}
