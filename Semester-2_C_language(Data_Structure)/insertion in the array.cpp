#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main ()
{
	int a[MAX_SIZE],size,i,pos,num;
	size=0;
	printf("Enter size of element:  ");
	scanf("%d",&size);
		printf("enter elements of array: \n");
	for(i=0;i<size;i++){
    scanf("%d",&a[i]);
	}
		printf("elements in array are:\n ",a[i]);
     for(i=0;i<size;i++){
    printf(" %d", a[i]);
     }
	printf("\nEnter a number to insert: ");
	scanf("%d",&num);
	printf("\nEnter number of position: ");
	scanf("%d",&pos);
	if(pos<=0||pos>size+1){
	printf("invalid position\n ");
	}
	else{
		for(i=size-1;i>=pos-1;i--){
		a[i+1]=a[i];
      } 
	a[pos-1]=num;
		size++;	
		
	printf("array after insertion: \n ",a[i]);
     for(i=0;i<size;i++){
    printf(" %d", a[i]);
     }
	}
			
}
