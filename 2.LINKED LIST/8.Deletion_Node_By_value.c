#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*deleteAtValue(struct Node*head,int value){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL && q->data!=value){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
};
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
head=deleteAtValue(head,4);
LinkedListTraversal(head);
return 0;
}