#include<stdio.h>
#include<conio.h>
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
	
	printf("\n-------------------------------Creation of a linked list--------------------------------------------\n");
	
			newnode = (struct node*) malloc(sizeof(struct node));
	printf("Enter the data: ");
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
	
	
	
		int main()
{

	while(1){
		printf("\nEnter choice:\n");
		printf("1. For creation\n");
		printf("2. For display Linked list\n");
		printf("3. For insert at beginning\n");
		printf("4. For insert at ending\n");
		printf("5. For insertion at specific position\n");
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
		
		case 0: printf("Goodbye!\n"); return 0;
		default : printf("\nInvalid choice! \nPlease try again.");
	}
		}
   getch();
} 
	
	
	
		

