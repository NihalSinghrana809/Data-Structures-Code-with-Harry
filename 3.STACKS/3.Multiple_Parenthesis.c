#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isFull(struct stack*ptr){
    return ptr->top==ptr->size-1;
}
int isEmpty(struct stack*ptr) {
    return ptr->top==-1;
}
void push(struct stack*ptr,char val) {
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow\n");
        return '\0';
    }else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char peek(struct stack*ptr,int i){
    int arrayInd=ptr->top-i+1;
    if(arrayInd<0||arrayInd>ptr->top){
        printf("Not a Valid Position\n");
        return -1;
    }else{
        return ptr->arr[arrayInd];
    }
}
char top(struct stack*ptr){
    if(!isEmpty(ptr)){
        return ptr->arr[ptr->top];
    }
    return '\0';
}
int match(char a,char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}
int parenthesisMatch(char*exp){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size*sizeof(char));
    char pooped_ch;
    for (int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            push(sp,exp[i]);
        }
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(isEmpty(sp)){
                return 0;
            }
            char pooped_ch=pop(sp);
            if(!match(pooped_ch,exp[i])){
                return 0;
            }

        }
    }
    int result=isEmpty(sp);
    free(sp->arr);
    free(sp);
    return result;
}
int main(){
char*exp="(8*9)";
if(parenthesisMatch(exp)){
    printf("Parentheses are Matching\n");
}
else{
    printf("Parentheses are Not Matching\n");
}
return 0;
}
