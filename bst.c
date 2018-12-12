#include<stdio.h>
struct bstnode{
    int data;
    struct bstnode *left;
    struct bstnode *right;
};
struct bstnode *root;

struct bstnode* createTree(){
    int data;
    struct bstnode *newnode;
    newnode = (struct bstnode*)malloc(sizeof(struct bstnode));
    scanf("%d",&data);
    if(data==-1){
        return NULL;
    }
    newnode->data = data;
    newnode->left = createTree();
    newnode->right = createTree();
return newnode;
}
void printIn(struct bstnode* root){
    if(root==NULL){
        return;
    }
    printIn(root->left);
    printf("%d  ",root->data);
    printIn(root->right);
}
void printPre(struct bstnode* root){
	if(root==NULL){
		return;
	}
	printf("%d  ",root->data);
	printPre(root->left);
	printPre(root->right);
}
void printPost(struct bstnode* root){
	if(root==NULL){
		return;
	}
	printPost(root->left);
	printPre(root->right);
	printf("%d  ",root->data);
}
int main(){
root = createTree();
printIn(root);
printf("\n");
printf("\n");
printPre(root);
printf("\n");
printf("\n");
printPost(root);
    return 0;
}
