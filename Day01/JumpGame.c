#include<stdio.h>
#include<stdbool.h>

bool canBallReach(int nums[],int n){
    int maxreach=0;
    for(int i=0;i<n;i++){
        if(i>maxreach)
           return false;
        else
           maxreach=i+nums[i];

           if(maxreach>=n)
              return true;
    }
}

int main(){
    int nums[]={2,3,4,1,1,4};
    int n=sizeof(nums)/sizeof(nums[0]);
    printf("%d",canBallReach(nums,n));
}