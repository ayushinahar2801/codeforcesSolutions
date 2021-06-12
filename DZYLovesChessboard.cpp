#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> v;
    string val;
    for(int i=0;i<n;++i)
    {
        cin>>val;
        v.push_back(val);
    }
    char arr[n][m];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(i%2==0)
            {
            if(v.at(i)[j]=='.')
            {
                if(j%2==0)
                {
                    arr[i][j]='B';
                }
                else
                {
                    arr[i][j]='W';
                }
            }
            else
            {
                arr[i][j]='-';
            }
            }
            else
            {
            if(v.at(i)[j]=='.')
            {
                if(j%2==0)
                {
                    arr[i][j]='W';
                }
                else
                {
                    arr[i][j]='B';
                }
            }
            else
            {
                arr[i][j]='-';
            }

            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}