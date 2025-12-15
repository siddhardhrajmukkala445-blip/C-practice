#include<stdio.h>
int main() {
	int i=5,j;
	j=(i++)+(++i);
	printf("j value is %d",j);
	return 0;
}
