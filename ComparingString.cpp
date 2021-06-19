#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int cnt=0,ans=0;
    int x,y;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
    {
        cout<<"NO";
        ans=1;
        exit(0);
    }
    else
    {
        for(int i=0;i<s1.length();++i)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
                if(cnt==1)
                {
                   x=i;
                }
                if(cnt==2)
                {
                    y=i;
                }
                if(cnt>2)
                {
                    ans=1;
                    break;
                }
            }
        }
    }
    // cout<<x<<" "<<y<<endl;
    if(ans==0 && cnt==2)
    {
        int flag=0;
        for(int i=0;i<s1.length();++i)
        {
            if(i==x)
            {
                if(s1.at(i)==s2.at(y))
                {
                    continue;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                if(i==y)
                {
                    if(s1.at(i)==s2.at(x))
                    {
                        continue;

                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(s1.at(i)==s2.at(i))
                    {
                        continue;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==0)
        {
            ans=0;
        }
        else
        {
            ans=1;
        }
    }
    else
    {
        ans=1;
    }

    if(ans==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}