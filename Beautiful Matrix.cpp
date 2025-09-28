#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int shape[5][5],result=0,r,c;
    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    cin >> shape[i][j];
    int i,j;
    for( i=0;i<5;i++)
    {
        for( j=0;j<5;j++)
        {
            if(shape[i][j]==1)
            {
                r=i;
                c=j;
                break;
            }
        }
    }
    result+=abs(3-(r+1));
    result+=abs(3-(c+1));
    cout << result << en;
    return 0;
}