#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1,j=2;
    while(n-((i*j)/2)>=0)
    {
        int fno=(i*j)/2;
        int sno=n-((i*j)/2);
        int x=1,y=2;
        int flag=0;
        while(((x*y)/2)<=sno)
        {
            if(((x*y)/2)==sno)
            {
                flag=1;
                break;
            }
            else
            {
                x++;y++;
            }
        }
        if(flag==1)
        {
            cout<<"YES";exit(0);
        }
        else
        {
            i++,j++;
        }
    }
    cout<<"NO";
    return 0;
}