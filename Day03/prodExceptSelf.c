#include<stdio.h>
#include<stdlib.h>

int *productExceptSelf(int *nums , int n){
    int *result = malloc(n*sizeof(int));
    result[0] = 1;
    for(int i=1;i<n;i++){
        result[i] = result[i-1]*nums[i-1];
    }
    int suffix = 1;
    for(int i = n-1; i>= 0;i--){
        result[i]=result[i]*suffix;
        suffix = suffix*nums[i];
    }
}
int main(){
    int nums[] = {1,2,3,4};
    int n=4;
    int *result = productExceptSelf(nums , n);
    for(int i=0;i<n;i++){
        printf("%d ",result[i]);
    }
    free(result);
    return 0;
}
/*for(int i=0;i<n;i++){
        prod*=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",prod/arr[i]);
    }*/

/*void productExceptSelf(int arr[],int n){
        int left[n];
        int right[n];
        int prod[n];
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<n;i++){
            left[i]=arr[i-1]*left[i-1];
        }
        for(int i=n-2;i>=0;i--){
            right[i]=arr[i+1]*right[i+1];
        }
        for(int i=0;i<n;i++){
            prod[i]=left[i]*right[i];
            printf("%d ",prod[i]);
        }
      
    

int *productExceptSelf(int arr[], int n) {
    int *prod = (int *)malloc(n * sizeof(int));
    int left = 1;
    for (int i = 0; i < n; i++) {
        prod[i] = left;
        left *= arr[i];
    }
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        prod[i] *= right;
        right *= arr[i];
    }
    return prod;
}


int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int prod=1;
    int *result = productExceptSelf(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}
*/