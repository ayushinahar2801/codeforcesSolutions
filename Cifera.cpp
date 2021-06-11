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
        if(l%k==0)
            l=l/k;
        else
            break;            
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