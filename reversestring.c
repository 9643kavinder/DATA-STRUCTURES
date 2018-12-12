#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char);
char pop();
int main(){
	int i;
	char str[20];
	printf("---------- REVERSING OF A STRING USING STACK ----------\n");
	printf("\nEnter the string\n");
	gets(str);
	for(i=0;i<strlen(str);i++){
		push(str[i]);
	}
	for(i=0;i<strlen(str);i++){
		str[i]=pop();
	}
	puts(str);
	return 0;
}

// PUSHING THE ELEMENTS OF STRING
void push(char str){
	if(top==MAX-1){
		printf("\nSTACK OVERFLOW\n");
	}
	else{
		stack[++top] = str;
	}
}

// POPPING THE EACH ELEMENT OF STRING ONE BY ONE
char pop(){
	if(top==-1){
		printf("\nSTACK UNDERFLOW\n");
	}
	else{
		return stack[top--];
	}
}

