/*
   1
  2 2
 3 3 3
4 4 4 4
*/
#include<stdio.h>
int main(){
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",i);
		}
		printf("\n");
	}
}

