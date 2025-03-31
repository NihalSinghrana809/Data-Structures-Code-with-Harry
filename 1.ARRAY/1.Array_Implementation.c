#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray*a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));//Dynamic memory Allocation
}
void display(struct myArray*a){
    for(int i=0;i<a->used_size;i++){
        printf("%d\t",a->ptr[i]);
    }
}
void setValue(struct myArray*a){
    for(int i=0;i<a->used_size;i++){
        int n;
        printf("Enter the Element %d:",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
int main(){
struct myArray grade;
createArray(&grade,10,7);
setValue(&grade);
display(&grade);
return 0;
}
