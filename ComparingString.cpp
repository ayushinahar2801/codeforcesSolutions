#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int cnt=0,ans=0;
    int x,y;
    cin>>s1>>s2;
    
//     Compare Lengths if not same then its obvious they are not genome
    if(s1.length()!=s2.length())
    {
        cout<<"NO";
        ans=1;
        exit(0);
    }
    else
    {
//         Now compare both chars of s1 and s2 who are at same place if there are more than 2 char who differ then it is clear that they are not genome
        for(int i=0;i<s1.length();++i)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
                //storing the index of first diff char in variable x
                if(cnt==1)
                {
                   x=i;
                }
                //storing the index of second diff char in variable y
                if(cnt==2)
                {
                    y=i;
                }
                //else if more than 2 char differ the exit
                if(cnt>2)
                {
                    ans=1;
                    break;
                }
            }
        }
    }
    
    //if only 2 char differ and ans is still 0 then>>>>>>>>>>>
    if(ans==0 && cnt==2)
    {
        int flag=0;
        for(int i=0;i<s1.length();++i)
        {
//          compare s1 and s2 but if it is place where diff char lie then compare that char with y pos and if they are same then continue
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
//          compare s1 and s2 but if it is place where diff char lie then compare that char with x pos and if they are same then continue
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
//                 if it is a pos other than x and y check for temporary purpose you can also avoid this if statment coz as we have entered in 
//                 this knowing that there are only 2 diff chars othere all are same
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

    if(ans==0)//ans =0 means yes
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
