#include<stdio.h>
void bubbleSort(int *A,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
}
void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}
int main(){
int A[5]={1,2,3,5,4};
bubbleSort(A,5);
printArray(A,5);
return 0;
}