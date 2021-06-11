#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,l;
    cin>>k>>l;
    int cnt=0;
    while(l>=k)
    {
        cnt++;
        l=l/k;
    }
    if(l==1)
    {
        cout<<"YES"<<"\n";
        cout<<cnt-1;
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}