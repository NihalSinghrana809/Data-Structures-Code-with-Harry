#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue*q){
    return q->r==q->size-1;
}
int isEmpty(struct queue*q){
    return q->r==q->f;
}
void enqueue(struct queue*q,int val){
    if(isFull(q)){
        printf("The Queue is Full:\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct queue*q){
    int a=-1;
    if(isEmpty(q)){
        printf("This Queue is Empty:\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main(){
struct queue q;
q.size=100;
q.f=q.r=-1;
q.arr=(int*)malloc(q.size*sizeof(int));
enqueue(&q,12);
enqueue(&q,15);
printf("Dequeing Element %d\n",dequeue(&q));
printf("Dequeing Element %d\n",dequeue(&q));
printf("Is Empty: %d\n",isEmpty(&q));
printf("Is Full: %d\n",isFull(&q));
free(q.arr);
return 0;
}
 