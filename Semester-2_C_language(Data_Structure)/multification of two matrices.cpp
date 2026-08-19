#include<stdio.h>

int main()
{
	int i,j,k,r1,c1,r2,c2, a[10][10], b[10][10], mul[10][10];
	printf("Enter order of matrix A: " );
	scanf("%d%d",&r1,&c1);
	printf("Enter order of matrix B: " );
	scanf("%d%d",&r2,&c2);
	
	// check Matrix valid or not
	if(c1 != r2){
		printf("Invlaid order.");
	printf("Please enter c1 = r2 ");
	return 0;
	}
	
	
	// matrix A
	printf("Enter the elements of A\n");
	for(i=0; i<r1; i++){
	for(j=0; j<c1; j++)
{
		scanf("%d",&a[i][j]);
	}	
			}
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++){
				printf("%4d",a[i][j]);
		}
	
		printf("\n");
	}
    
    	// matrix B
	printf("Enter the elements of B\n");
	for(i=0; i<r2; i++){
	for(j=0; j<c2; j++)
{
		scanf("%d",&b[i][j]);
	}	
			}
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++){
				printf("%4d",b[i][j]);
		}
	
		printf("\n");
	}
	
	// Find A*B
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++){
			mul[i][j]=0;
			for(k=0; k<c1; k++)
			mul[i][j] += a[i][k]*b[k][j] ;
		}
	}
	
	
	
	printf("Resultant of A*B\n ");
	for(i=0; i<r1; i++)
	{
			for(j=0; j<c2; j++)
	printf("%4d",mul[i][j]);
	printf("\n");
	}

	return 0;
}
