#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
int queue[MAX],front,choice,x,i,rear;
void enqueue(int);
void dequeue(void);
void display(void);
int main(){
	front = -1;
	rear = -1;
	printf("\n---------QUEUE IMPLEMENTATION USING ARRAY---------\n");
	while(1){
		printf("\n\t1.ENQUEUE\n\t2.DEQUEUE\n\t3.DISPLAY\n\t4.EXIT\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				printf("Enter the value to insert\n");
				scanf("%d",&x);
				enqueue(x);
				break;
			}
			case 2:{
				dequeue();
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

	
}

// ENQUEUE FUNCTION
void enqueue(int value){
	if(rear==MAX-1){
		printf("\nQUEUE OVERFLOW\n");
	}
	else{
		if(front==-1){
			front=0;
		}
		queue[++rear]=value;
	}
}

// DEQUEUE FUNCTION
void dequeue(){
	if(front==rear){
		printf("\nQUEUE IS EMPTY\n");
	}
	else{
		printf("THE DELETED ELEMENT IS : %d",queue[front]);
		front++;
		if(front==rear){
			front=rear=-1;
		}
		
	}
}

// DISPLAY FUNCTION
void display(){
	int i;
	if(rear==-1){
		printf("\nQUEUE IS EMPTY\n");
	}
	else{
	printf("THE QUEUE ELEMENTS ARE : ");
	for(i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
	}
}

