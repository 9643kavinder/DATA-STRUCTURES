#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
struct node* prev;
};
struct node* head;
void insertathead(int data){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
void insertatend(int data){
struct node* temp;
temp=head;
struct node* newnode;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->next=NULL;
newnode->data=data;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode;
newnode->prev=temp;
}
void insertatmiddle(int data,int position){
struct node* newnode;
newnode= (struct node*)malloc(sizeof(struct node));
newnode->data=data;
struct node* temp;
temp=head;
for(int i=0;i<position-2;i++){
    temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;
temp->next->prev=newnode;
newnode->prev=temp;
}
void deleteathead(){
struct node* temp;
temp=head;
head=temp->next;
head->prev=NULL;
}
void deleteatend(){
struct node* temp;
temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;
}
temp->next=NULL;
}
void deleteatmiddle(int position){
struct node* temp;
temp=head;
for(int i=0;i<position-2;i++){
    temp=temp->next;
}
temp->next->next->prev=temp;
temp->next=temp->next->next;

}
void print(){
struct node* temp;
temp=head;
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
    first->prev=NULL;
    first->data=1;
    first->next=second;
    second->prev=first;
    second->data=2;
    second->next=third;
    third->prev=second;
    third->data=3;
    third->next=fourth;
    fourth->prev=third;
    fourth->data=4;
    fourth->next=NULL;
head=first;
insertathead(0);
insertatend(5);
insertatmiddle(6,2);
deleteathead();
deleteatend();
deleteatmiddle(2);
print();
    return 0;
}
