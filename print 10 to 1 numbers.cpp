#include<stdio.h>
int  main() {
	int units;
	float a,q,total;
	printf("enter units: ");
	scanf("%d",&units);
	if(units<100){
		a=units*3.5;
		q=30;
	} else if(units<200){
		a=units*4;
		q=40;
	} else if(units<300) {
		a=units*4.5;
		q=50;
	} else if(units<400){
		a=units*5;
		q=60;
	} else if(units<500){
		a=units*5.5;
		q=70;
	} total=a+q;
	printf("total value is %.2f",total);
	return 0;
}
