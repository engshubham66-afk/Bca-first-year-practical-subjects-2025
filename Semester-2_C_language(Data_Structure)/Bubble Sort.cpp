#include<stdio.h>

int main()
{
	int i,j,n,temp,A[20];

	
	printf("Enter size of an array A: ");
	scanf("%d",&n);
	printf("Enter the elements\n");
for(j=0; j<n; j++){
	scanf("%d",&A[j]);	
	}
	
	// sorting an array using Bubble Sort
	printf("\n--sorting an array using Bubble Sort--\n");
	for(i=0; i<n-1; i++){
		
		for(j=0; j<n-1-i; j++){
			if(A[j] > A[j+1]){
				temp=A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				
			}
		}
	
	}

	
		printf("\nThe sorted elements are: ");
	for(j=0; j<n; j++){
		printf(" %d", A[j]);
	}
	
	// sorting an array using Selection Sort
	printf("\n--sorting an array using Selection Sort--\n");
	int min;
	    for(i=0; i<n-1; i++){
    	min = i;
    for(j=i+1; j<n; j++){
    	if(A[j] < A[min]){
    		min=j;
		}
	}
   
	if(min !=i){
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
    		
		}
	
		printf("\nThe sorted elements are: ");
	for(j=0; j<n; j++){
		printf(" %d", A[j]);
	}
	
	// sorting an array using insertion Sort
	printf("\n--sorting an array using insertion Sort--\n");
	for(i=0; i<n; i++){
	temp = A[i];
	j= i-1;
	while(i>=0 && A[j] > temp){
		A[j+1] = A[j];
		j--;
	}
	A[j+1] = temp;
}
	printf("\nThe sorted elements are: ");
	for(j=0; j<n; j++){
		printf(" %d", A[j]);
	}
}
