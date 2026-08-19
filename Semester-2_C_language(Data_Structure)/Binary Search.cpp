#include<stdio.h>

main()
{
	int n,data,l,r,mid, a[20] = {90, 80, 60, 50, 40, 30, 20,10};
	n=9;
	l=0, r=7;
	
	printf("Enter the element to be searched: ");
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
