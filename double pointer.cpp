#include<stdio.h>
int main() {
	int a=10,*ptr,**dptr;
	ptr=&a;
	dptr=&ptr;
	printf("\n address of ptr=%x",&ptr);
	printf("\n value of dptr=%x",dptr);
	printf("\n value of a=%d",a);
	printf("\n ptr pointing value=%d",*ptr);
	printf("\n dptr pointing value=%d",**dptr);
	printf("\n%d",*(&a));
	return 0;
}
