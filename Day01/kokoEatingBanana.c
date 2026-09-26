#include<stdio.h>
int minSpeed(int branches[],int n,int h){
    int left=1;
    int right=0;
    for(int i=0;i<n;i++)
    {
        if(branches[i]>right)
        {
            right=branches[i];
        }
    }
    
        int speed=right;
    while(left<=right)
    {
            //mid---->speed
        int mid=left+(right-left)/2;
        int totalHours=0;
        //totalHours=branches[i]/mid;
        for(int i=0;i<n;i++)
        {
            totalHours+=(branches[i]+mid-1)/mid;
            //seil to appro to high a/b=(a+b-1)/2
        }
        if(totalHours<=h)
        {
            speed=mid;
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
        
    }   
    return speed;
}

int main()
{
    int branches[]={3,6,7,11};
    int h=8;
    printf("%d",minSpeed(branches,4,h));
}