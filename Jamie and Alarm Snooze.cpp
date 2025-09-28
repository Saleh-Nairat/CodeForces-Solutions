#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int x,steps=0;
    cin >> x;
    int h,m;
    cin >> h >> m;
    while(true)
    {
        int temp1=h,temp2=m;
        if(temp1%10==7)
        {
            break;
        }
        else
        {
            temp1/=10;
            if(temp1%10==7)
                break;
        }
        if(temp2%10==7)
        {
            break;
        }
        else
        {
            temp2/=10;
            if(temp2%10==7)
                break;
        }
        m-=x;
        if(m<0)
        {
            m=60-abs(m);
            if(h==0)
                h=23;
            else
            h--;
        }
        steps++;
    }
    cout << steps << en;
    return 0;
}