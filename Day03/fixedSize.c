#include<stdio.h>

void windowSumMax(int arr[], int n, int k) {
   
    int left=0;
    int right=k-1;
    int sum=0;
    for(int i=left;i<=right;i++)
    {
        sum+=arr[i];
    }
        printf("%d\n",sum);
        while(right<n-1)
        {
            //sum=sum-arr[left]+arr[right+1];
            sum=sum-arr[left];
            left++;
            right++;
            sum=sum+arr[right];
            printf("%d\n",sum);
        }
    
    
    
    
   
   /* 
    int max_sum = 0;
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }
    int current_sum = max_sum;
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("Maximum sum of %d consecutive elements is: %d\n", k, max_sum);
    */
}
int main()
{
    int arr[]={2,1,5,1,3,2};
    int n=6;
    int k=3;
    windowSumMax(arr, n, k);
}