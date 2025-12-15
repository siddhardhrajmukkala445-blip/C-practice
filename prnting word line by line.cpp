
#include <stdio.h>
int main() {
    char x[30];
    int i;
    printf("enter x word: ");
    gets(x);
    for(i=0;x[i]!='\0';i++){
        if(x[i]==' '){
            printf("\n");
        } else{
            printf("%c",x[i]);
        }
    }
    return 0;
}
