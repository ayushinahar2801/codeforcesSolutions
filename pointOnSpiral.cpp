#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int p=0;
    int k=0;
    if(x==0 && y==0)
    {
        cout<<0;
        exit(0);
    }
    else
    {
        int p=max(abs(x),abs(y));
        int k=(p-1)*4;
        if(x==p&&y<=p&&y>1-p)
        k+=1;
        else if(y==p&&x<=p)
        k=k+2;
        else if(x==-p&&y<=p)
        k+=3;
        else if(y==-p&&x<=p)
        k+=4;
        cout<<k;
    }
 
    return 0;
}