#include<stdio.h>
int main() {
	int a[20],n,i,s=0;
	float avg;
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n enter values at a[%d]: ",i);
		scanf("%d",&a[i]);}
		
		for(i=0;i<n;i++){
			s=s+a[i];
			avg=s/n;}
			printf("\n sum=%d",s);
			printf("\n average=%f",avg);
		
		return 0;
	} 
	

