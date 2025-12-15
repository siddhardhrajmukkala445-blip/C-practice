#include<stdio.h>
int main() {
	int a=10;
	float b=3.5;
	void *ptr;
	ptr=&a;
	printf("\n value of ptr=%x",ptr);
	printf("\n address of ptr=%x",&ptr);
	printf("\n ptr pointing value=%d",*(int*)ptr);
	ptr=&b;
	printf("\n ptr pointing value=%f",*(float*)ptr);
	printf("\n value of ptr=%x",ptr);
	return 0;
}
