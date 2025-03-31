#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Unverflow/n");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *ptr,int i){
    int arrayInd=ptr->top-i+1;
    if(arrayInd<0||arrayInd>ptr->top){
        printf("Not a Valid Position:");
        return -1;
    }
    else{
        return arrayInd;
    }
}
int top(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int main(){
struct stack *s=(struct stack*)malloc(sizeof(struct stack));
s->size=10;
s->top=-1;
s->arr=(int *)malloc(s->size*sizeof(int));
printf("Stack Has been Created :\n");
isEmpty(s);
printf("The Top Element is:%d\n",top(s));
for(int i=1;i<=10;i++){
    push(s,i);
}
printf("Peeked item:%d\n",peek(s,6));
printf("Stack is Full:%d\n",isFull(s));
for(int i=0;i<10;i++){
    printf("Popped items:%d\n",pop(s));
}
return 0;
}
