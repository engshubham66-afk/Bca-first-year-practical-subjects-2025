#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node*next;
	};

 main()
{
	
	struct node*head, *newnode, *temp;
	head=0; 
	int choice = 1; 
	int count; 
	while(choice){
		newnode = (struct node*) malloc(sizeof(struct node)	);
	printf("Enter data: ");
	scanf("%d",&newnode->data);
	newnode->next = 0;
	if(head == 0){
		
	head= temp = newnode;
}
else{
	temp->next = newnode;
	temp = newnode;
}
count++;
    printf("Do you wnat to continue (0,1) ?  ");
    scanf("%d",&choice);
}
    printf("\nLinked List before insertion: ");
    temp = head;
    while(temp != 0){
    	printf(" %d",temp->data);
    	temp = temp->next;
    
	}
	// insert data at beginning
     newnode = (struct node*) malloc(sizeof(struct node)	);
	printf("\nEnter data to be inserted at the starting position: ");
	scanf("%d",&newnode->data);
	
	newnode->next = head;
	head = newnode;
	count++;
	
	printf("\nLinked List after insertion: ");
	temp = head;
	
	while (temp != 0){
			printf(" %d",temp->data);
			temp = temp->next;
}

// insert data at ending
newnode = (struct node*) malloc(sizeof(struct node)	);
	printf("\nEnter data to be inserted at the end position: ");
	scanf("%d",&newnode->data);
	newnode->next = 0;
	if (head == 0){
	head = newnode;
	}
	else{
		temp = head;
	while(temp->next != 0){
		
		temp = temp->next;
	}
	temp->next = newnode;
	count++;
}
printf("Linked List after insertion at end: ");
temp= head;
while(temp != 0){
	printf( " %d", temp->data);
	temp = temp->next;
}
// insertion at specific position
newnode = (struct node*) malloc(sizeof(struct node)	);
int pos; int i;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    if(pos > count){
    	printf("Invalid postion");
	}
	else{
		temp  = head;
		while (i < pos) {
			temp = temp->next;
			i++;
		}
		if(pos == 1){
			newnode->next = head;
			head = newnode;
			return;
		}
		elsae{
		temp = head;
		while (i<pos-1){
			temp = temp->next;
			I++
		}
		}
		printf("\nEnter the data: ");
		scanf("%d",&newnode->data);
		newnode->next = temp->next;
		temp->next = newnode;
	}
printf("\nLinked List after insertion at specific position: ");
temp= head;
while(temp != 0){
	printf( " %d", temp->data);
	temp = temp->next;
	
}
return 0;

}
