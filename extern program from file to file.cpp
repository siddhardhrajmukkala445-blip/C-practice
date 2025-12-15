#include<stdio.h> // file 1.c
#include"file2.c"
extern void sample();
int a=100;
int main() {
	sample();
	return 0;
}
 
