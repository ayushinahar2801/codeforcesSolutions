#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    //sum of the entered no.s
    int sum1=n+m;

    //creating vectors for removing Zeroes from The entered No.s
    vector<int>v;
    vector<int>t;

    //for variable n 
    while(n>0)
    {
        if(n%10!=0)
        {
        v.push_back(n%10);
        n=n/10;
        }
        else
        {
            n=n/10;
        }
    }

    //for variable m
    while(m>0)
    {
        if(m%10!=0)
        {
        t.push_back(m%10);
        m=m/10;
        }
        else
        {
            m=m/10;
        }
    }

    //making new variable to store the changed value of n and m after removing zeroes
    int newn=0;
    int newm=0;
    
    //Loop peeche se aaage is liye chalaya coz jb hum vector me daal rahe
    //the value to mod 10 krke daal rhe the, jisse ki last vvali value first me jaari thi array k
    for(int i=v.size()-1;i>=0;--i)
    {
        if(i!=0)
        {
        newn=newn+v.at(i);
        newn*=10;
        }
        else
        {
            newn=newn+v.at(i);
        }
    }

    //same goes for m too
    for(int i=t.size()-1;i>=0;--i)
    {
        if(i!=0)
        {
        newm=newm+t.at(i);
        newm*=10;
        }
        else
        {
            newm=newm+t.at(i);
        }
    }
    
    //finding the sum of new n and m
    int sum2=newn+newm;

    //ab jo humne uppar enter kri hui values add krdi thi to aise 
    //hoskta h ki usme koi Zeroes ho to let us remove them now
    vector<int> newsum;

    //ye vaise hi h jaise uppar n or m me se zeroes nikale the u can scroll and check for better understanding
    while(sum1>0)
    {
        if(sum1%10!=0)
        {
        newsum.push_back(sum1%10);
        sum1=sum1/10;
        }
        else
        {
            sum1=sum1/10;
        }
    }

    //memory waste nhhi krni h isiliye sum1 ko hi zero banakr usme new sum ki without zero vali value store krlo
    //else if u dont want to do that ,can make a new var too
    sum1=0;

    //save kro sum sum1 me without zero vala
    for(int i=newsum.size()-1;i>=0;--i)
    {
        if(i!=0)
        {
        sum1=sum1+newsum.at(i);
        sum1*=10;
        }
        else
        {
            sum1=sum1+newsum.at(i);
        }
    }
    
    //finally check krlo equal h to thk h

    if(sum1==sum2)
    {
        cout<<"YES";
    }

    //otherwise no krdo
    
    else
    cout<<"NO";
    return 0;
}