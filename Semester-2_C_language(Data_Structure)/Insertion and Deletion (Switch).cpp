#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main ()
{
	int a[MAX_SIZE],size,i,pos,num,choice;
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
     while(1){
     	printf("\n----------------------------------------------------------------------------------------------\n");
     	printf("1. Insert an element \n");
     	printf("2. Delete an element\n");
     	printf("3. Display array\n");
     	printf("4. Exit\n");
     	printf("Enter your choice: ");
     	scanf("%d",&choice);
     	switch(choice){
     	case 1:	// insertion 
     	if(size>=MAX_SIZE){
     		
		printf("Array is full! Cannot insert.\n");
	
		 }
		 else{
		 
		 printf("\nEnter a number to insert: ");
	scanf("%d",&num);
	printf("\n (Array starts with position 1)\n Enter number of position:  ");
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
    printf("Element inserted successfully. ");
     }
		 }
		 break;
		 case 2: //deletion
		 if(size==0){
		printf("Array is empty.\n");
	}
	else{
		 printf("\nEnter the position which is to be delete: ");
	scanf("%d",&pos);
	if(pos<=0||pos>size){
		printf("invalid position\n ");
	}
	else{
		
		for(i=pos-1;i<size-1;i++){
			a[i]=a[i+1];
		}
		int item=a[pos-1];
		size--;
		printf("Element deleted successfully. ");
	}
	 }
	break;
	case 3: // Display 
	if(size==0){
		printf("Array is empty.\n");
	}
	else{
		printf("Current array elements:  ");
		for(i=0;i<size;i++){
    printf(" %d",a[i]);
    
		}
	}
	break;
	case 4: // Exit
	exit(0);
	printf("Invalid choice!\n Please try again.\n");
	
	
	}
}
}
