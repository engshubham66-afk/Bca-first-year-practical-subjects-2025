#include<stdio.h>
#define MAX_SIZE 100

main(){
	int i,data,n, a[MAX_SIZE];
	printf("Array index starts from ZERO.");
	printf("\nEnter size of an array: ");
	scanf("%d",&n);
	
	printf("Enter an array elements: ");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
printf("\n----searching an element using Linear Search----\n");
	// searching an element using Linear Search
	printf("Enter data to find: ");
	scanf("%d",&data);
	for(i=0; i<n; i++){
		if( a[i]==data){
			printf("Element found at index: %d",i);
		break;	
		}
		}
		if(i==n){
			printf("Element not found");
			}
		


// searching an element using Binary Search
	int l,r,mid;
	l = 0, r = n-1;
	printf("\n----searching an element using Binary Search----\n");
	printf("\nEnter the element to be searched: ");
	scanf("%d",&data);
	while(l<=r){
		 mid=(l+r)/2;
		if(data==a[mid])
	{
			printf("Data is found at index %d", mid);
		return 0;
	}
		
		else if(data>a[mid])
		r=mid-1;
		
		else
		l=mid+1;
	}
	if(r<l){
			printf("Data is not found ");
	}

	return 0;
}
