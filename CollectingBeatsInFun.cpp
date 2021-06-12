#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string arr[4];
    for(int i=0;i<4;++i)
    {
        cin>>arr[i];
    }
    string fullString=arr[0]+arr[1]+arr[2]+arr[3];
    // cout<<fullString;
    vector<int> v;
    for(int i=0;i<16;++i)
    {
        if(fullString[i]!='.')
        {
            v.push_back(int(fullString[i])-48);
        }
    }
    int flag=0;
    for(int i=0;i<9;++i)
    {
        int cnt=count(v.begin(),v.end(),i+1);
        if(cnt<=2*k)
        {
            continue;
        }
        else
        {
            if(cnt>2*k)
            {
            cout<<"NO";
            flag=1;
            break;
            }
        }
    }

    if(flag==0)
        cout<<"YES";
    return 0;
}