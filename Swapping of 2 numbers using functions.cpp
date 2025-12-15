#include <stdio.h>
void swap(int *x,int *y);
int main() {
	int a=10,b=20;
	printf("\n before swapping a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\n After swapping a=%d and b=%d",a,b);
	return 0;
}
 void swap(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

