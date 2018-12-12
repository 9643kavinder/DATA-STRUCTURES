#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};
struct node* top;
void push(int);
void pop();
void display();
int main(){
	int x,choice;
	top = NULL;
	printf("\n---------STACK IMPLEMENTATION USING LINKED LIST---------\n");
	while(1){
		printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				printf("Enter the value to insert\n");
				scanf("%d",&x);
				push(x);
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				exit(0);
				break;
			}
			default:{
				printf("Wrong choice inserted-----TRY AGAIN!!\n");
				break;
			}
		}
	}
	
	return 0;
}

// PUSH FUNCTION
void push(int value){
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data  = value;
	if(top==NULL){
		newnode->next = NULL;
	}
	else{
		newnode->next = top;
	}
	top = newnode;
}

// POP FUNCTION
void pop(){
	if(top==NULL){
		printf("\nSTACK IS EMPTY\n");
	}
	else{
		struct node* temp;
		temp = top;
		printf("DELETED ELEMENT IS : %d",top->data);
		top = temp->next;
		free(temp);
	}
}

// DISPLAY FUNCTION
void display(){
	if(top==NULL){
		printf("\nSTACK IS EMPTY\n");
	}
	else{
		struct node* temp;
		temp = top;
		printf("THE ELEMENTS OF STACK IS : ");
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}
