#include<stdio.h>
int largest(int a,int b,int c,int d);
int main() {
	int a,b,c,d,g;
	printf("enter a,b,c,d values: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	g=largest(a,b,c,d);
	printf("\n g=%d",g);
	return 0;
} int largest(int a,int b,int c,int d)
{
	if(a>b&&a>c&&a>d){
		printf("\n a is big");
		return a;
	} else if(b>c&&b>d){
		printf("\n b is big");
		return b;
	} else if(c>d){
		printf("\n c is big");
		return c;
	} else {
		printf("\n d is big");
		return d;
	}
}
