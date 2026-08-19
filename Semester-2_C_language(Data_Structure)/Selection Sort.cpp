#include<stdio.h>

int main()
{
	int i,j,n,temp,min,a[20];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(j=0; j<n; j++){
	scanf("%d",&a[j]);	
	}
   
    for(i=0; i<n-1; i++){
    	min = i;
    for(j=i+1; j<n; j++){
    	if(a[j] <a[min]){
    		min=j;
		}
	}
	if(min !=i){
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
    		
		}
	
		printf("\nThe sorted elements are: ");
	for(j=0; j<n; j++){
		printf(" %d", a[j]);
	}
}

