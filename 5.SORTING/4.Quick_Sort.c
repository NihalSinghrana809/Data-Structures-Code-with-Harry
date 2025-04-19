#include<stdio.h>
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }a
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quickSort(int arr[],int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);//Sorting Left Sub Array
        quickSort(arr,partitionIndex+1,high);//Sorting Right Sub Array
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
int arr[]={3,5,2,13,12};
int n=5;
quickSort(arr,0,n-1);
printArray(arr,n);
return 0;
}