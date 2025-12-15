#include <stdio.h>
main(){
	int i,j,a[100][100],r,c,b[100][100],x[100][100],s,l;
	printf("enter r,c values: ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for (j=0;j<c;j++){
			printf("enter matrix 1 elements at a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for (j=0;j<c;j++){
			printf("enter matrix 2 elements at a[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}  if(r!=c){
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            x[i][j] = 0;  
            for (l = 0; l < r; l++) {
                x[i][j] += a[i][l] * b[l][j];
            }
        }
    }
} else{
	printf("Not valid");
}
    printf("Resultant matrix (A x B):\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
	return 0;
	
}
