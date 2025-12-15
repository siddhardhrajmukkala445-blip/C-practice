#include<stdio.h>
int main() {
	int a[5]={10,2,5,7,9};
	int *ptr1,*ptr2;
	ptr1=&a[0];
	ptr2=&a[2];
	printf("\n ptr2-ptr1=%d",ptr2-ptr1);
	return 0;
}
