#include<stdio.h>

int main()
{
	int i,j,m,n, a[10][10], b[10][10], sub[10][10], add[10][10];
	printf("Matrix is  valid for addition and substraction \n when r1 = r2 and c1 = c2");
	printf("\nEnter order of matrix A: " );
	scanf("%d%d",&m,&n);
	printf("Enter order of matrix B: " );
	scanf("%d%d",&m,&n);
	
	// matrix A
	printf("Enter the elements of A\n");
	for(i=0; i<m; i++){
	for(j=0; j<n; j++)
{
		scanf("%d",&a[i][j]);
	}	
			}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++){
				printf("%4d",a[i][j]);
		}
	
		printf("\n");
	}
    
    	// matrix B
	printf("Enter the elements of B\n");
	for(i=0; i<m; i++){
	for(j=0; j<n; j++)
{
		scanf("%d",&b[i][j]);
	}	
			}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++){
				printf("%4d",b[i][j]);
		}
	
		printf("\n");
	}
	
	
	// Find A-B
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++){
		sub[i][j] = a[i][j] - b[i][j];
			
		}
	}
	
	
	
	printf("Resultant of A-B\n ");
	for(i=0; i<m; i++)
	{
			for(j=0; j<n; j++)
	printf("%4d",sub[i][j]);
	printf("\n");
	}

// Find A+B
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++){
		add[i][j] = a[i][j] + b[i][j];
			
		}
	}
	
	
	
	printf("Resultant of A+B\n ");
	for(i=0; i<m; i++)
	{
			for(j=0; j<n; j++)
	printf("%4d",add[i][j]);
	printf("\n");
	}

	return 0;
}
