#include<stdio.h>
int main() {
	FILE *fp,*fp2;
	char ch;
	int i;
	fp = fopen("C:\\C language\\cse13.txt\\copy.txt","w");
	while(i<10){
		ch=getchar();
		fputc(ch,fp);
		i++;
	} fclose(fp);
	fp=fopen("C:\\C languge\\cse13.txt","r");
	fp2=fopen("C:\\C language\\copy.txt","w");
	while((ch=fgetc(fp))!=EOF){
		fputc(ch,fp2);
	}
	fclose(fp2);
	fclose(fp);
	return 0;
}
