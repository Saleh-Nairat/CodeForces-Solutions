#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {//c-a b-c
        int a,b,temp,minimumvalue=INT_MAX;
        cin >> a >> b;
        for(int i=a;i<=b;i++)
        {
            temp=(i-a)+(b-i);
            if(temp<minimumvalue)
            minimumvalue=temp;
        }
        cout << minimumvalue << en;
    }
    return 0;
}