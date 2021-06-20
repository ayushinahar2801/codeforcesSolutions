#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int start=0,end=0;
    int prend=0;
    for(int i=0;i<n;++i)
    {
        if(arr[i]=='.')
        {
            if(arr[i-1]=='R')
            {
                end+=1;
            }
            continue;
        }
        else
        {
            if(arr[i]=='R')
            {
                if(start==0 && end==0)
                {
                    start=i+1;
                    end=i+1;
                }
                else
                {
                    end=i+1;
                }
            }
            else
            {
                if(start==0 && end==0)
                {
                    start=i+1;
                    end=i;
                    break;
                }
                else
                {
                    end=i;
                    break;
                }
            }
        }
    }
    cout<<start<<" "<<end;
    return 0;
}