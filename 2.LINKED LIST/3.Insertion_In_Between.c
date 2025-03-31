#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*insertAtIndex(struct Node*head,int data,int index){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=index){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
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
insertAtIndex(head,4,3);
LinkedListTraversal(head);
return 0;
}