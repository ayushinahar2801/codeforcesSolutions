//____________________________________________________Logic____________________________________________________
// The catch here is :
//that if '1' is in first row ,last row ,first column or last column the answer will be equal to 2
//else if '1' is somwhere else in the matrix then the answer will be 4
//__________________________________________________Logic End___________________________________________________

//                                                    A. Table
//                                           time limit per test1 second
//                                         memory limit per test256 megabytes
//                                              inputstandard input
//                                              outputstandard output

// Simon has a rectangular table consisting of n rows and m columns. Simon numbered the rows of the table from top to bottom starting from one and the columns — from left to right starting from one. We'll represent the cell on the x-th row and the y-th column as a pair of numbers (x, y). The table corners are cells: (1, 1), (n, 1), (1, m), (n, m).

// Simon thinks that some cells in this table are good. Besides, it's known that no good cell is the corner of the table.

// Initially, all cells of the table are colorless. Simon wants to color all cells of his table. In one move, he can choose any good cell of table (x1, y1), an arbitrary corner of the table (x2, y2) and color all cells of the table (p, q), which meet both inequations: min(x1, x2) ≤ p ≤ max(x1, x2), min(y1, y2) ≤ q ≤ max(y1, y2).

// Help Simon! Find the minimum number of operations needed to color all cells of the table. Note that you can color one cell multiple times.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int ans=0;
    int flag=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>arr[i][j];
            if(i==0 ||j==0 ||i==n-1 ||j==m-1)
            {
                if(arr[i][j]==1)
                {
                    ans=2;
                    flag=1;
                }
            }
        }
    }
    if(flag==0)
    {
        ans=4;
    }
    cout<<ans;
}