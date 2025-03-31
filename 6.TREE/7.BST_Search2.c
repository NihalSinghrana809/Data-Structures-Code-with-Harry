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
struct node*search(struct node*root,int key){
    while(root!=NULL){
        if(key==root->data){
            return root;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return NULL;
}
int main(){
struct node*p=createNode(5);
struct node*p1=createNode(3);
struct node*p2=createNode(6);
struct node*p3=createNode(1);
struct node*p4=createNode(4);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
struct node*n=search(p,4);
if(n!=NULL){
    printf("Found :%d\n",n->data);
}
else{
    printf("Element Not Found\n");
}
return 0;
}