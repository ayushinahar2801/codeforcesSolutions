#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    char v[9][8];
    cin>>n;
    int z=0;
    if(n==0)
    {
        cout<<"O-|-OOOO";
        exit(0);
    }
    while(n>0)    
    {
        if(n%10<5)
        {
            int temp=n%10;
            for(int j=0;j<8;++j)
            {
                if(j<3)
                {
                v[z][j]='O';
                j++;
                v[z][j]='-';
                j++;
                v[z][j]='|';
                }
                else
                {
                    if(temp>0)
                    {
                        v[z][j]='O';
                        temp--;
                    }
                    else
                    {
                        if(temp==0)
                        {
                            v[z][j]='-';
                            temp--;
                        }
                        else
                        v[z][j]='O';
                    }
                }
            }
        z++;
        n=n/10;
        }
        else
        {
            int temp=(n%10)-5;
            for(int j=0;j<8;++j)   
            {
                if(j<3)
                {
                    v[z][j]='-';
                    j++;
                    v[z][j]='O';
                    j++;
                    v[z][j]='|';
                }
                else
                {
                    if(temp>0)
                    {
                        v[z][j]='O';
                        temp--;
                    }
                    else
                    {
                        if(temp==0)
                        {
                            v[z][j]='-';
                            temp--;
                        }
                        else
                        {
                            v[z][j]='O';
                        }
                    }
                    
                }
            }
            z++;
            n=n/10;
        }
    }
    for(int i=0;i<z;++i)
    {
        for(int j=0;j<8;++j)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}