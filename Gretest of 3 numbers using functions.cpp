#include<stdio.h>
void G();
int main()
{ 
	G();

} void G() {
	int a,b,c,G;
	printf("enter a,b,c values: ");
	scanf("%d%d%d",&a,&b,&c);
	G=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("G=%d",G);
}
