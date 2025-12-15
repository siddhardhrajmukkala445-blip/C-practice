#include<stdio.h>
int main() {
	char s[30],s1[30];
	int i,j,f=0;
	printf("enter s word:");
	gets(s);
	printf("enter s1 word:");
	gets(s1);
	for(i=0,j=0;s[i]!='\0'&&s1[j]!='\0';i++,j++){
		if(s[i]!=s1[j]){
			f++;
			break;
		}
	} if(f==0){
		printf("\n two strings are equal",s);
	} else {
		printf("\n two strings are not equal",s1);
	}
	return 0;
}
