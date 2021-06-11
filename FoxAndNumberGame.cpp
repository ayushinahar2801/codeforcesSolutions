#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],sum=0;
    
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int mfdsum=0;
    int cnt=0;
    do
    {
        if(cnt!=0)
        {
            sum=mfdsum;
            mfdsum=0;
        }
        for(int i=n-1;i>=1;--i)
        {
            if(arr[i]>arr[i-1])
            {
            arr[i]=arr[i]-arr[i-1];
            }
            mfdsum+=arr[i];
        }
        // cout<<arr[0]<<arr[1]<<endl;
        mfdsum+=arr[0];
        cnt+=1;
        sort(arr,arr+n);
    }while(mfdsum<sum);
    cout<<mfdsum;
    return 0;
}