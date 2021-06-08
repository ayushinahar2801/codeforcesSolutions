#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int u,l;
    vector<pair<int,int>> v;
    for(int i=0;i<n;++i)
    {
        cin>>u>>l;
        v.push_back(make_pair(u,l));
    }
    int oddf=0,odds=0;
    vector<int> oddfs,oddss;
    for(int i=0;i<n;++i)
    {
        if(v.at(i).first%2!=0)
        {
            oddf++;
            oddfs.push_back(i);
        }
    }
    for(int i=0;i<n;++i)
    {
        if(v.at(i).second%2!=0)
        {
            odds++;
            oddss.push_back(i);
        }
    }
    if((oddf+odds)%2==0)
    {
        if(oddf==0 && odds==0 || oddf%2==0 && odds%2==0)
        {
            cout<<0;
        }
        else
        {
            if(oddf<odds)
            {
                int ultiginti=0;
                for(int i=0;i<oddf;++i)
                {
                    if(oddfs.at(i)==oddss.at(i))
                    {
                        ultiginti++;
                    }
                }
                if(ultiginti==oddfs.size())
                {
                    cout<<-1;
                }
                else
                {
                    cout<<1;
                }
            }
            else
            {
                int ultiginti=0;
                for(int i=0;i<odds;++i)
                {
                    if(oddss.at(i)==oddfs.at(i))
                    {
                        ultiginti++;
                    }
                }
                if(ultiginti==oddss.size())
                {
                    cout<<-1;
                }
                else
                {
                    cout<<1;
                }
            
            }
        }
        
    }
    else
    {
        cout<<-1;
    }
    return 0;
}