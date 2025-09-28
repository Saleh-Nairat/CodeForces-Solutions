#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        char arr[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]!='.')
                cout << arr[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}