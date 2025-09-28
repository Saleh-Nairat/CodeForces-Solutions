#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            int num ;
            cin >> num;
            sum+=num;
        }
        long long root=sqrt(sum);
        if(root*root==sum)
        cout << "YES" << en;
        else
        cout << "NO" << en;
    }
    return 0;
}