#include<stdio.h>
int main() {
	int a[5]={10,2,5,7,9};
	int *ptr,i;
	ptr=&a[0];
	for(i=0;i<5;i++){
		printf("\n%d",*(ptr+i));
	}
	return 0;
}
