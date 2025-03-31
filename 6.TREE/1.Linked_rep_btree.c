#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*createNode(int data){
struct node*n;
n=(struct node*)malloc(sizeof(struct node));
n->data=data;
n->left=NULL;
n->right=NULL;
return n;
};
int main(){
// Root Node
// struct node*p;
// p=(struct node*)malloc(sizeof(struct node));
// p->left=NULL;
// p->right=NULL;
// // Left Child
// struct node*p1;
// p=(struct node*)malloc(sizeof(struct node));
// p->left=NULL;
// p->right=NULL;
// // Right Child
// struct node*p2;
// p=(struct node*)malloc(sizeof(struct node));
// p->left=NULL;
// p->right=NULL;
// // Linking the root node with left and right child
// p->left=p1;
// p->right=p2;
struct node*p=createNode(2);
struct node*p1=createNode(1);
struct node*p2=createNode(4);
// Linking the root node with left and right child
p->left=p1;
p->right=p2;
return 0;
}