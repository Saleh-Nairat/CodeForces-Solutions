#include <bits/stdc++.h>
using namespace std;
#define en '\n';
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    const int time=4*60;
    int n,k,counter=0;
    cin >> n >> k;
    int rem=time-k;
    for(int i=1;i<=n;i++)
    {
        if(rem<i*5)
        {
            break;
        }
        else
        {
            counter++;
            rem-=i*5;
        }
    }
    cout << counter << endl;
    return 0;
}
