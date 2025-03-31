#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*insertAtEnd(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
}
void LinkedListTraversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Element:%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
struct Node*head;
struct Node*second;
struct Node*third;
struct Node*fourth;
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=fourth;
fourth->data=4;
fourth->next=NULL;
insertAtEnd(head,5);
LinkedListTraversal(head);
return 0;
}