#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> v;
    string val;
    int cnt=0;
    for(int i=0;i<n;++i)
    {
        cin>>val;
        v.push_back(val);
        if(isdigit(val[0]))
        {
            int length=val.length();
            if(length==1)
            {
                cnt++;
            }
            else if(length==2)
            {
                if(int(val[0])-48==1 && int(val[1])-48<8)
                {
                    cnt++;
                }
            }
        }
        else
        {
            if(val=="ABSINTH" || val=="BEER" || val=="BRANDY" || val=="CHAMPAGNE" || val=="GIN" || val=="RUM" || val=="SAKE" || val=="TEQUILA" || val=="VODKA" || val=="WHISKEY" || val=="WINE")
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}