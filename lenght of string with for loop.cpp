#include<stdio.h>
int main() {
	char x[25];
	int l=0,i;
	printf("enter x value: ");
	gets(x);
	for(i=0;x[i]!='\0';i++){
		l++;
		printf("\n l=%d",l);
	}
	return 0;
}
