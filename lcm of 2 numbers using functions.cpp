#include<stdio.h>
int common(int a,int b);
int main() {
	int a,b,lcm;
	printf("enter a,b values:");
	scanf("%d%d",&a,&b);
	if(a>b){
		lcm=common(b,a);
	} else {
		lcm=common(a,b);
	} 
} printf("\n lcm of %d and %d=%d",a,b,lcm);
int common(int a,int b){
	static int m=0;
	m=m+b;
 if((m%3==0)&&(m%5==0)){
 	return m;
 } else {
 	common(a,b);
 }
}
