#include<stdio.h>
void windowSumMax(int arr[],int n,int k){
    int left = 0;
    int right = k -1;
    int sum = 0;
    for(int i = left ; i<= right ; i++){
        sum += arr[1];
    while (right < n -1){
        sum = sum - arr[left];
        left++;
        right++;
        sum =  sum+arr[right];
        printf("%d\n",sum);
    }
    }
}
int main(){
    int arr[] = {2,1,5,1,3,2};
    

}