#include<stdio.h>
int merge(int A[],int mid,int low,int high){
    int i,j,k;
    int B[100];
    i=low,j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=high){
        B[k]=A[j];
        j++;
        k++;
    }
    for(int i=0;i<=high;i++){
        A[i]=B[i];
    }
}
void mergeSort(int A[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(A,low,mid);//Left half
        mergeSort(A,mid+1,high);//Right half
        merge(A,mid,low,high);
    }
}
void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}
int main(){
int A[]={9,14,4,8,7,5,6};
int n=7;
mergeSort(A,0,n-1);
printArray(A,n);
return 0;
}