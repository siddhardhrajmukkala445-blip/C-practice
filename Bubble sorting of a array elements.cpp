#include<stdio.h>
int main() {
	int a[50],n,i,j;
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n enter values at a[%d]: ",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1-i;j++){
				if(a[j]>a[j+1]){
					a[j]=a[j]+a[j+1];
					a[j+1]=a[j]-a[j+1];
					a[j]=a[j]-a[j+1];
					}
				}
				
			}
		printf("\n after sorting");
		for(i=0;i<n;i++){
			printf("\t%d",a[i]);
		}
		return 0;
	}
	

