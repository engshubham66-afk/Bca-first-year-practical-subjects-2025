#include<stdio.h>

int main()
{
	int i,j,n,temp,a[20];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements\n",a[j]);
	for(j=0; j<n; j++){
	scanf("%d",&a[j]);	
	}

for(i=0; i<n; i++){
	temp = a[i];
	j= i-1;
	while(i>=0 && a[j] > temp){
		a[j+1] =a[j];
		j--;
	}
	a[j+1] = temp;
}
	printf("\nThe sorted elements are: ");
	for(j=0; j<n; j++){
		printf(" %d", a[j]);
	}
}
