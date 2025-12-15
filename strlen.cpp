#include<stdio.h>
#include<string.h>
int main() {
	char x[30];
	int l;
	printf("enter x value: ");
	gets(x);
	l=strlen(x);
	printf("\n l=%d",l);
	return 0;
}
