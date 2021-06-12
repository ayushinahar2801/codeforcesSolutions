#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k;
    char d;
    cin >> k >> d;
    string newnum;
    if (d == '0' && k > 1)
    {
        cout << "No solution";
        exit(0);
    }
    else
    {
        for (long long i = 0; i < k; ++i)
        {
            if (i == 0)
            {
                newnum=newnum+d;
            }
            else
            {
                newnum=newnum+'0';
            }
        }
    }
    cout << newnum;
    return 0;
}