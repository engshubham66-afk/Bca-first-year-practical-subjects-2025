#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
/* Global Declaration */
	struct node *head = 0, *newnode;
	int choice;

void create_linked_list(){
struct node *temp;
	
	
	
			newnode = (struct node*) malloc(sizeof(struct node));
	printf("Enter a data: ");
	scanf("%d",&newnode->data);
	newnode->next = 0;
	if(head == 0){
		head = temp = newnode;
	}
	else{
		temp = head;
		while(temp->next != 0){
			temp = temp->next;
		}
		temp->next = newnode;
			}
	
	printf("\nElement inserted sucessfully.");
	}


void display(){ 
struct node *temp;
temp = head;
	int count = 0;
	if(temp == 0){
		printf("\nList is empty.");
		return;
	}
		printf("\nLinked list elements: \n");
		while(temp != 0){
		printf("%d ->",temp->data);
		temp = temp->next;
		count++;
	}
	printf("NULL\nTotal number of nodes: %d",count);
	}
	
	void insert_beginning(){
		struct node *temp;
			newnode = (struct node*) malloc(sizeof(struct node));
	printf("\nEnter the data to insert at beginning: ");
	scanf("%d",&newnode->data);
	newnode->next = head;
	head = newnode;
	
	printf("\nElement inserted at beginning");
	}
	
	void insert_end(){
		struct node *temp;
			newnode = (struct node*) malloc(sizeof(struct node));
	printf("\nEnter the data to insert at end: ");
	scanf("%d",&newnode->data);
	newnode->next = 0;
	if(head==0){
		head = newnode;
		}
		else{
			temp = head;
		
	while(temp->next != 0){
		temp = temp->next;
		}
			temp->next = newnode;
			}
	
		printf("\nElement inserted at end ");
	}
	
	void insert_at_specific_position(){
		struct node *temp = head;
		
int pos; int i=1, count=0;
 // 1. Calculate the current length of the list
while(temp != 0){
		printf("%d ->",temp->data);
		temp = temp->next;
		count++;
	}
    printf("\nEnter the position(1 to %d): ",count+1);
    scanf("%d",&pos);
    // validate position
if (pos < 1 || pos > count + 1) {
        printf("Invalid position! Current list size is %d\n", count);
        return; 
    }

    // 3. Allocate memory ONLY after validation
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);

    // 4. Handle insertion
    if (pos == 1) {
        // Insert at beginning
        newnode->next = head;
        head = newnode;
    } else {
        // Insert at middle or end
        temp = head;
        // Move temp to the node right BEFORE the insertion point
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    printf("\nElement inserted successfully.");
}
	
/*	void delete_at_beginning(){
	struct node *temp;
	if(head == 0){
		printf("\nLinked list is empty.\n");
	}
	else{
		temp = head;
		head = head->next;
		free(temp);
		printf("\nDeleted sucessfullly.");
		}
	}
	
	void delete_at_end(){
		struct node *temp, *prevnode;
	
			if(head == 0){
		printf("\nLinked list is empty.\n");
	}
	else if(head->next == 0){
		free(head);
		head = 0;
	}
	else {
			temp = head;
			while(temp->next != 0){
			prevnode = temp;
			temp = temp->next;
		}
		
			prevnode->next = 0;
			free(temp);
	}
		printf("\nDeleted sucessfully.");
		
	}
	

void delete_at_specific_position()
{
    struct node *temp, *nextnode;
     temp = head;
    int pos, i = 1;

    if(head == 0)
    {
        printf("\nLinked list is empty.\n");
        return;
    }

    printf("\nEnter the position to delete: ");
    scanf("%d", &pos);
    if(pos == 1){
    	head = head->next;
    	free(temp);
    	printf("\nNode deleted successfully.");
    	return;
	}

    while(i < pos-1 && temp->next != 0)
    {
        temp = temp->next;
        i++;
    }

    if(temp->next == 0)
    {
        printf("\nInvalid position.\n");
        return;
    }

    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);

    printf("\nNode deleted successfully.\n");
} */
		int main(){
		int j;
	do{
		printf("\n----------------MENU-----------------------\n");
		printf("1. For creation\n");
		printf("2. For display Linked list\n");
		printf("3. For insert at beginning\n");
		printf("4. For insert at ending\n");
		printf("5. For insertion at specific position\n"); 
	//	printf("6. To delete a node\n");
		printf("0. exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);

	switch(choice){
		case 1: create_linked_list();
		break;
		
		case 2: display();
		break;
	
		case 3: insert_beginning();
		break;
		
		case 4: insert_end();
		break;
		
		case 5: insert_at_specific_position();
		break;
		
/*	case 6: printf("1. To delete at beginning\n");
printf("2. To delete at end\n");
printf("3. To delete at specific position\n");
printf("\nEnter your choice: ");
scanf("%d",&j);
if(j<1 || j>3){
	printf("\nInvalid choice.\n Please enter choice 1 or 2 or 3.");
	
}
switch(j){
	case 1: delete_at_beginning();
	break;
	
	case 2: delete_at_end();
	break; 
	
	case 3: delete_at_specific_position();
	break;
	
	
} */


		case 0: printf("\nGoodbye!\n"); 
		break;
		default : printf("\nInvalid choice! \nPlease try again.");
	}
		} while(choice != 0);
   
} 
	
	
	
		

