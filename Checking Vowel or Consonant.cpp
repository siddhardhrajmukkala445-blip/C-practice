#include<stdio.h>
int main() {
	int n,count,i,R;
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		count=0;
	for(R=1;R<=i;R++){
		if(i%R==0){
			count++;
		}
	} if(count==2){
		printf("\n %d is a prime",i);
	} else {
		printf("\n %d is not a prime",i);
	}
}
	return 0;
} 
