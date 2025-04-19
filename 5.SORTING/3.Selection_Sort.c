#include<stdio.h>
void selectionSort(int arr[],int n){
    int indexOFMin;
    for(int i=0;i<n-1;i++){
        indexOFMin=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[indexOFMin]){
                indexOFMin=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[indexOFMin];
        arr[indexOFMin]=temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
int arr[5]={5,4,3,2,1};
int n=5;
selectionSort(arr,n);
printArray(arr,n);
return 0;
}