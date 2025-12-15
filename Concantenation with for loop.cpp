#include<stdio.h>
int main() {
     char x[20],y[20];
     int i,l=0;
     printf("enter x word:");
     gets(x);
     printf("enter y word:");
     gets(y);
     for(i=0;x[i]!='\0';i++){
     	l++;}
     	if(x[l]!=' '){
		 x[l]=' ';
		 l++;
    for(i=0; y[i]!='\0';l++,i++){
    	x[l]=y[i];                                   
	}
}
	 printf("\n concantenated word=%s",x);
	 return 0;
}
