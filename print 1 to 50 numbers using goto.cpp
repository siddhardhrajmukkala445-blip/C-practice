#include<stdio.h>
int main() {
	int k=50;
	Number:
		printf("\n %d",k);
		k--;
		if(k>=1){
			goto Number;
		}
		return 0;
}
