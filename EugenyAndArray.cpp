#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> v;
    int val1,val2;
    int arr[n];
    int cnt1=0,cntm1=0;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            cnt1++;
        }
        else
            cntm1++;
    }
    for(int i=0;i<m;++i)
    {
        cin>>val1>>val2;
        v.push_back(make_pair(val1,val2));
    }
    for(int i=0;i<m;++i)
    {
        int size=v.at(i).second-v.at(i).first+1;
        if(size%2!=0)
        {
            cout<<0<<"\n";
        }
        else
        {
            int p1=size/2;
            if(cnt1>=p1 && cntm1>=p1)
            {
                cout<<1<<"\n";
            }
            else
            {
                cout<<0<<"\n";
            }
        }
    }
    return 0;
}