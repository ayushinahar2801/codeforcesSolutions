#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    int val1,val2;
    int x,y;
    cin>>x>>y;
    for(int i=0;i<n-1;++i)
    {
        cin>>val1>>val2;
        if(val1<y)
        {
            if(val2>y)
            {
                val2=y;
            }
            v.push_back(make_pair(val1,val2));
        }
    }
    int size=y-x;
    int arr[size];

    for(int i=0;i<size;++i)
    {
        arr[i]=0;
    }
    int ctr=0;
    while(ctr<v.size())
    {
        int i=v.at(ctr).first-x;
        int itr=v.at(ctr).second-v.at(ctr).first;
        while(itr--)
        {
            arr[i]=1;
            i++;
        }
        ctr++;
    }
    // for(int i=0;i<size;++i)
    // {
    //     cout<<"\t--"<<arr[i];
    // }
    cout<<count(arr,arr+size,0);
    return 0;
}