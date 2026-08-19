#include<stdio.h>
main()
{
	int a[5], b[5] ,c[10], n, m, i, p=0, q=0, r=0;
	printf("Enter the size of first array: ");
	scanf("%d",&n);
	printf("Enter elements of the first array:\n ");
	for(i=0; i<n; i++){
		scanf("%d",& a[i]);
	}
	printf("Enter the size of second array: ");
	scanf("%d",&m);
	printf("Enter elements of the second array:\n ");
	for(i=0; i<m; i++){
		scanf("%d",& b[i]);
}
	
	while(p<n && q<m)
	{
		if(a[p] < b[q]){
			c[r] = a[p]; p++; r++;
		}
		else {
		
		c[r] = b[q]; q++; r++;
	}
	
}
	
		while(q<m){
			c[r] = b[q]; q++; r++;
		}
	

		while(p<n){
			c[r] = a[p]; p++; r++;
		}
	
	printf("The merged array is\n");
	for(i=0; i<n+m; i++){
			printf("%6d",c[i]);
	}
return 0;
}
