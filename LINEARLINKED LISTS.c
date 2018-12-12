#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* head;
void insertatbegin(int data){
struct node* newnode;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=head;
head=newnode;
}
void insertatend(int data){
struct node* newnode;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
struct node* temp;
temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode;
}
void insertatmiddle(int data,int position){
struct node* temp;
temp=head;
struct node* newnode;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data=data;
for(int i=0;i<position-2;i++){
        temp= temp->next;

}
newnode->next=temp->next;
temp->next=newnode;

}
void deleteathead(){
    struct node* temp;
    temp=head;
    head=temp->next;

}
void deleteatposition(int position){
struct node*temp;
temp=head;
for(int i=0;i<position-2;i++){
    temp=temp->next;
}
temp->next=temp->next->next;
}
void deleteatend(){
struct node* temp;
temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;
}
temp->next=NULL;
}

void print(){
struct node* temp;
temp = head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}
int main()
{
    head=NULL;
    struct node* first;
    first = (struct node*)malloc(sizeof(struct node));
    struct node* second;
    second = (struct node*)malloc(sizeof(struct node));
    struct node* third;
    third = (struct node*)malloc(sizeof(struct node));
    struct node* fourth;
    fourth = (struct node*)malloc(sizeof(struct node));
    head=first;
    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next = NULL;
    insertatbegin(0);
    insertatend(5);
    insertatmiddle(6,2);
    deleteathead();
    deleteatposition(3);
    deleteatend();
    print();
    return 0;
}
