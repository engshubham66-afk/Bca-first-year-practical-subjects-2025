#include<stdio.h>
#include<conio.h>
main ()
{
	int n,i;
	printf("Enter how many numbers:  ");
	scanf("%d",&n);
	
	int arr;
	
	printf("Enter %d numbers\n ",n);
	for( i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);		
	}
	int largest =arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>largest){
			largest =arr[i];
		}
	}
	printf("Largest number is: %d\n ",largest);
    return 0;
}
