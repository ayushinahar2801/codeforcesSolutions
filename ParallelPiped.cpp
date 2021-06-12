#include<bits/stdc++.h>
using namespace std;

int main()
{
    float lb,bh,hl;
    cin>>lb>>bh>>hl;
    float lbyh=lb/bh;
    float  bbyl=bh/hl;
    float lsq=(lbyh/bbyl)*bh;
    int l=sqrt(lsq);
    int h=hl/l;
    int b=bh/h;
    cout<<(l*4)+(b*4)+(h*4);
    return 0;
}