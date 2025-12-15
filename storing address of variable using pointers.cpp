#include<stdio.h>
int main() {
	int a=10;
	int *ptr;
	ptr=&a;
	printf("\n value of a=%d",a);
	printf("\n address of a=%x",&a);
	printf("\n value of ptr=%x",ptr);
	printf("\n address of ptr=%x",&ptr);
	printf("\n ptr pointing value=%d",*ptr);
	return 0;
}
