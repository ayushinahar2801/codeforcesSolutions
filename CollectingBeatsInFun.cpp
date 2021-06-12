#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string arr[4];
    
    //Taking in array
    for(int i=0;i<4;++i)
    {
        cin>>arr[i];
    }
    
    //converting it into Single String
    string fullString=arr[0]+arr[1]+arr[2]+arr[3];
    
    //Storing all the integer in the String in a vector expelling all '.'s
    vector<int> v;
    for(int i=0;i<16;++i)
    {
        if(fullString[i]!='.')
        {
            v.push_back(int(fullString[i])-48);//converting char to int--------->  int(char)-48
        }
    }
    int flag=0;
    
    //Final O/p
    for(int i=0;i<9;++i)
    {
        int cnt=count(v.begin(),v.end(),i+1);
        if(cnt<=2*k)
        {
            continue;
        }
        else
        {
            if(cnt>2*k)
            {
            cout<<"NO";
            flag=1;
            break;
            }
        }
    }

    if(flag==0)
        cout<<"YES";
    return 0;
}
