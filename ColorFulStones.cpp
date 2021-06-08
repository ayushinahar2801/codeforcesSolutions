#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int itr=0;
    for(int i=0;i<t.length();++i)
    {
        if(t[i]==s[itr])
        {
            itr++;
        }
    }
    cout<<itr+1;
    return 0;
}