#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<=n+1;++i)
    {
        if(arr[i-1]!=i)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}