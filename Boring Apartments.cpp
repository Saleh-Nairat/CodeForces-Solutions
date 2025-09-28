#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
bool isboring(int year,int temp)
{
    while(year)
    {
        int digit=year%10;
        if(digit!=temp)
        return false;
        year/=10;
    }
    return true;
}
int sumdigit(int num)
{
    int sum=0;
    while(num)
    {
        sum++;
        num/=10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        int n,result=0;
        cin >> n;
        for(int i=1;i<=n%10;i++)
        {
            for(int j=i;j<10000;j++)
            {
                if(isboring(j,i))
                {
                    result+=sumdigit(j);
                }
                if(i==n%10)
                if(j==n)
                break;
            }
        }
        cout << result << en;
    }
    return 0;
}