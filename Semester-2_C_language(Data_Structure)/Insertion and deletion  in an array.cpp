#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int a[MAX_SIZE],i,pos,num; 
	int size=0;
void loadTask ()
{
	
	printf("Enter size of element:  ");
	scanf("%d",&size);
		printf("enter elements of array: \n");
	for(i=0;i<size;i++){
    scanf("%d",&a[i]);
	}
}
void	viewTask()	
{
	printf("elements in array are:\n ",a[i]);
     for(i=0;i<size;i++){
    printf(" %d", a[i]);
     }
 }
     
void addTask(){
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

void deleteTask(){
	printf("\nEnter the position which is to be delete: ");
	scanf("%d",&pos);
	if(pos<=0||pos>size){
		printf("invalid position\n ");
	}
	else{
		int item=a[pos-1];
		for(i=pos-1;i<size-1;i++){
			a[i]=a[i+1];
		}
		size--;
		printf("Element deleted: %d!",item);
		printf("\nArray after deletion: ");
		for(i=0;i<size;i++){
    printf(" %d",a[i]);
		}
}
	}
			


int main(){
	
	int choice;
	 while (1) {
        printf("\n--- Array LIST MENU ---\n");
        printf("1. Enter size & elements:\n ");
        printf("2. View Array list\n");
        printf("3. Add an element of array \n");
        printf("4. Delete an element of array\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        	case 1: loadTask(); break;
            case 2: viewTask(); break;
            case 3: addTask(); break;
            case 4: deleteTask(); break;
            case 5: printf("Goodbye!\n"); return 0;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
