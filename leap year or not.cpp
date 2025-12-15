#include<stdio.h>
int   main() {
	int n,r=1,s=0;
	printf("enter n value: ");
	scanf("%d", &n);
	while(r <= n){
		s=s+r;
		r++;
	} printf("\n sum of %d numbers=%d",n,s);
	return 0;
}
