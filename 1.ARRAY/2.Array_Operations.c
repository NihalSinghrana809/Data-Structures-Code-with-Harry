#include<stdio.h>
#include<stdlib.h>
int display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int insertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }//Insertion from back
    arr[index]=element;   
    return 1;//Inserted;
}
void deletion(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}
int main(){
int arr[5]={1,2,3,5};
insertion(arr,4,4,5,3);
display(arr,5);
deletion(arr,5,4);
display(arr,4);
return 0;
}