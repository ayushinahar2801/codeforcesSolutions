#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ans=0;
    int multiplier=k/n;
    if(multiplier<3 && k%n==0)
    {
        cout<<n;
    }
    else
    {
        if(multiplier<3)
        {
            cout<<n-(k%n);
        }
        else
        {
            cout<<0;
        }
    }
    return 0;
}