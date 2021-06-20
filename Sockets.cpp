#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    //descending order me jamalo
    sort(arr, arr + n, greater<int>());

    // to keep counter of supply line filter
    int cnt = 0;

    //agr socket hi itne ho jisme saare devices fit hojaye to supply line ki zarurat hi nai
    if (k >= m)
    {
        cout << 0;
        exit(0);
    }

    //else find out the no. of supply line filter
    else
    {
        // tb tk chalao loop jb tk ya to socket khatam ho jaye ya to supply line filter
        while (k > 0 || cnt < n)
        {
            //is if se apn saare socket me ek ek supply line filter fit krre h
            if (k > 0 && cnt < n)
            {
                m -= arr[cnt];
                cnt++;
                k--;
                //yaha check krte h k----------- ya to m devices connect hogaye h supply line filters me ya jitne bache h 
                //utne socket me khtm hojaye to supply line filter use na krna pade
                if (m <= 0 || m <= k)
                {
                    cout << cnt;
                    exit(0);
                }
            }
            //ab jb socket khtm ho jaye to supply line filters me supply line filter lagane ki baarri aajaegi
            else
            {
                // ye tb tk chalaenge tb tk cnt mtln supply line filter khtm nhi hojate
                if (cnt < n)
                {
                    if (k == 0)
                    {
                        m++;
                        m -= arr[cnt];
                        cnt++;
                        k = -1;
                    }
                    else
                    {
                        if (m <= 0)
                        {
                            cout << cnt;
                            exit(0);
                        }
                        m += 1;
                        m -= arr[cnt];
                        cnt++;
                    }
                }
                //or agr supply line filter khtm ho gaye h or socket bache h still devices ko satisfy nhi kr skte to 
                //hum isko -1 krdete h taaaki loop terminate hojaye otherwise cnt k khtm hone k bavjood socket na khtm hone ki vajah se loop infinite chlta rahega
                else
                {
                    k = -1;
                }
            }
        }
    }
    cout << "-1";
    return 0;
}