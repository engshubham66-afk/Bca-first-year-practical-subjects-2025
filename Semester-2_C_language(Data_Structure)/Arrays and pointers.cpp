#include<stdio.h>

int main (){
	int a[5];
	int *q;
	q=a;
	int i;
	printf("Enter 5 integers: ");
	
	for(i=0;i<5;i++){
		scanf("%d",&i[q]);
	}
	printf("\nDisplay array elements using pointers:\n ");
	for(i=0;i<5;i++){
		printf("Element %d: value=%d | Address=%p\n",i,*(q+i),(q+i));
	}
	
}
