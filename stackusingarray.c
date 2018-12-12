#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX],top,choice,x,i;
void push(int);
void pop(void);
void display(void);
int main(){
	top = -1;
	printf("\n---------STACK IMPLEMENTATION USING ARRAY---------\n");
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

	
}


// PUSH FUNCTION
void push(int value){
	if(top==MAX-1){
		printf("\nSTACK OVERFLOW\n");
	}
	else{
	stack[++top]=value;
}
}

//POP FUNCTION
void pop(){
	if(top==-1){
		printf("\nSTACK UNDERFLOW\n");
	}
	else{
		top--;
	}
}

// DISPLAY FUNCTION
void display(){
	if(top==-1){
		printf("\nSTACK IS EMPTY!!\n");
	}
	else{
		printf("The Stack is : ");
		for(i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
	}
}
