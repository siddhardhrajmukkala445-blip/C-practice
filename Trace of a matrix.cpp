#include<stdio.h>
int main() {
	int a[10][10],i,j,n,s=0;
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter elements at a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	for(i=0;i<n;i++){
		s=s+a[i][i];
	}
	printf("s=%d",s);
	return 0;
}
