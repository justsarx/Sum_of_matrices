#include<stdio.h>
#include<conio.h>
int main(){
	int op1[10][10],op2[10][10],sum[10][10],i,j,m,n;
	
	printf("Enter no. of rows :: ");
	scanf("%d",&m);
	printf("\nEnter no. of columns :: ");
	scanf("%d",&n);
	
	printf("\nEnter value to the first matrix:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\tEnter a[%d][%d] value :: ",i,j);
			scanf("%d",&op1[i][j]);
		}
	}
	
	printf("\nEnter value to the second matrix:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\tEnter b[%d][%d] value :: ",i,j);
			scanf("%d",&op2[i][j]);
		}
	}	
	
	printf("First entered matrix is:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\t%d",op1[i][j]);
			}
		printf("\n\n");
		}
	printf("Second entered matrix is:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\t%d",op2[i][j]);
			}
		printf("\n\n");
		}
	
	for(i=0;i<m;i++)
		for(j=0;j<m;j++){
			sum[i][j] = op1[i][j]+op2[i][j];
		}
	
	printf("Sum of the matrices are:-\n");
	
		for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\t%d",sum[i][j]);
		}
		printf("\n\n");
	}
	
	
	return 0;
}
