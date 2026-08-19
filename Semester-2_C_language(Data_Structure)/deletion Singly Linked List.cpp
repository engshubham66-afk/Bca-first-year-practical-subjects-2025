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
	int n,i,value;
	printf("Enter number of nodes: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
	newnode = (struct node*) malloc(sizeof(struct node));
	printf("Enter data for node %d: ",i+1);
	scanf("%d",&value);	
	
	
	newnode->data = value;		
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
}
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
	
		void delete_at_beginning(){
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
	int count=0;
    struct node *temp, *nextnode;
    
    int pos, i = 1;

    if(head == 0)
    {
        printf("\nLinked list is empty.\n");
        return;
    }
     //  Calculate the current length of the list
      temp = head;
while(temp != 0){
		printf("%d ->",temp->data);
		temp = temp->next;
		count++;
	}
	printf("NULL");
printf("\nEnter the position to delete (1 to %d): ",count);
    scanf("%d",&pos);
    if(pos < 1 || pos > count){
    	printf("\nInvalid position.\n");
    	return;
	}
    // delete first node
    if(pos == 1){
    	head = head->next;
    	free(temp);
    	printf("\nNode deleted successfully.");
    	return;
	}
// reset temp again
temp = head;
    while(i < pos-1 )
    {
        temp = temp->next;
        i++;
    }

    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);

    printf("\nNode deleted successfully.\n");
}
int main(){
	
	do{
		printf("\n----------------MENU-----------------------\n");
		printf("1. For creation\n");
		printf("2. For display Linked list\n");
		printf("3. delete at beginning\n");
		printf("4. delete at ending\n");
		printf("5. delete at specific position\n"); 
		printf("0. exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);

	switch(choice){
		case 1: create_linked_list();
		break;
		
		case 2: display();
		break;
	
		case 3: delete_at_beginning();
		break;
		
		case 4: delete_at_end();
		break;
		
		case 5: delete_at_specific_position();
		break;
	
		case 0: printf("\nGoodbye!\n"); 
		break;
		default: printf("\nInvalid choice! \nPlease try again.");
	}
		} while(choice != 0);
   
} 
	
	
	
		

