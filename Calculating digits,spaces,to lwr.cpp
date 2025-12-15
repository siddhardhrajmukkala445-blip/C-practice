#include<stdio.h>
#include<ctype.h>
int main() {
	char a[50];
	int i,l=0,u=0,v=0,d=0,s=0,c=0;
	printf("enter a line:");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]>=65&&a[i]<=90){
			u++;
		} else if(a[i]>=97&&a[i]<=122){
			l++;
		}
	} for(i=0;a[i]!='\0';i++){
		a[i]=tolower(a[i]);
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			v++;
		}
	else if(a[i]>='0'&&a[i]<='9'){
		d++;
	} else if(a[i]==' '){
		s++;
	}	else {
		c++;
	}
}
	printf("\n %d",l);
	printf("\n %d",u);
	printf("\n %d",v);
	printf("\n %d",c);
	printf("\n %d",d);
	return 0;
}
