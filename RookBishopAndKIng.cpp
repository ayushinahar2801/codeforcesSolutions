#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;

    // for rook
    if(r1==r2||c1==c2)
    {
        cout<<1<<" ";
    }
    else
        cout<<2<<" ";

    //for bishop
    int tempr1=0,tempc1=0;
    if(r1>r2 && c1<c2)        
    {
        tempr1=r2;
        tempc1=c1+(r1-r2);
    }
    else
    {
        if(r1<r2 && c1<c2)
        {
            tempr1=r2;
            tempc1=c1+(r2-r1);
        }
        else
        {
            if(r1>r2 && c1>c2)
            {
                tempr1=r2;
                tempc1=c1-abs(r1-r2);
            }
            else
            {
                if(r1<r2 && c1>c2)
                {
                    tempr1=r2;
                    tempc1=c1-abs(r1-r2);
                }
            }
        }
    }
    if(c1==c2)
    {
        if(abs(r1-r2)%2==0)
        {
            cout<<2<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    else
    {
        if(r1==r2)
        {
            if(abs(c1-c2)%2==0)
            {
                cout<<2<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        else
        {
            if(abs(tempc1-c2)%2==0)
            {
                if(abs(tempc1-c2)==0)
                cout<<1<<" ";
                else
                cout<<2<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
    }
    //king
    int cnt=0;
    if(r1==r2)
        cout<<abs(c2-c1);
    else if(c1==c2)
        cout<<abs(r2-r1);
    else
    {
        while(r1!=r2 && c1!=c2 && r1-1!=r2 && r1+1!=r2)
        {
            if(r1>r2 && c1<c2)
            {
                r1--;
                c1++;
                cnt++;
            }
            else
            {
                if(r1>r2 && c1>c2)
                {
                    r1--;
                    c1--;
                    cnt++;
                }
                else
                {
                    if(r1<r2 && c1<c2)
                    {
                        r1++;
                        c1++;
                        cnt++;
                    }
                    else
                    {
                        r1++;
                        c1--;
                        cnt++;
                    }
                }
            }
        }
        if(c1>c2)
        {
            cout<<cnt+abs(c1-c2);
        }
        else
        {
            if(c1<c2)
            {
                cout<<cnt+abs(c2-c1);
            }
            else
            {
                if(c1==c2)
                {
                    cout<<cnt+abs(r2-r1);
                }
            }
        }
    }
    return 0;
}