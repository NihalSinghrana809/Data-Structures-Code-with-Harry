#include<stdio.h>
int LinearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int BinarySearch(int arr[],int size,int element){
    int low=0,high=size-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
int arr[5]={1,2,3,4,5};
printf("%d",LinearSearch(arr,5,5));
printf("\n");
printf("%d",BinarySearch(arr,5,3));
return 0;
}