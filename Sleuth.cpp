#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int size=a.length()-1;
    while(a[size])
    {
        if(isalpha(a[size]))
        {
            a[size]=toupper(a[size]);
            if(a[size]=='A' || a[size]=='E' || a[size]=='I' || a[size]=='O' || a[size]=='U' || a[size]=='Y')
            {
                cout<<"YES";
                break;
            }
            else
            {
                cout<<"NO";
                break;
            }
        }
        else
        {
            size--;
        }
    }
    return 0;
}