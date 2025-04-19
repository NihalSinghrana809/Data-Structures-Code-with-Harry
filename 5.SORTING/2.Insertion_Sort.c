#include<stdio.h>
void insertionSort(int arr[],int n){
    int key,j;
    // Loop for passes
    for(int i=1;i<=n-1;i++){
        //Loop for each pass
        key=arr[i];
        j=i-1;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
insertionSort(arr,n);
printArray(arr,n);
return 0;
}