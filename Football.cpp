#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string word;
    string secondword;
    string arr[n];
    int cnt=1;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        if(i==0)
        {
            word=arr[i];
        }
        else
        {
            if(word==arr[i])
            {
                cnt++;
            }
            else
            {
                secondword=arr[i];
            }
        }
    }
    if(cnt>n-cnt)
    {
        cout<<word;
    }
    else
    {
        cout<<secondword;
    }
    return 0;
}