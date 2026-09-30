#include <stdio.h>
#include <time.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void RadixSort(int arr[],int n){
    int max=arr[0];
    int i,j;
    for(i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    
}

int main(){
    int n;
    clock_t start,end;
    double time;
    printf("enter the number of elements ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    start=clock();
    RadixSort(arr,n);
    end=clock();
    time=((double)(end-start))/CLOCKS_PER_SEC;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\ntime taken is %f",time);
    return 0;
}