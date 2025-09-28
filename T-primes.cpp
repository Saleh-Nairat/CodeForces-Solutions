#include <bits/stdc++.h>
using namespace std;
#define en '\n'
bool isprime(long long num)
{
    if(num==2)return true;
    if(num<=1||num%2==0)return false;
    for(long long i=3;i*i<=num;i++)
    if(num%i==0)
    return false;
    return true;
}
bool istprime(long long num)
{
    long long root=sqrt(num);
    if(root*root==num&&isprime(root))
    return true;
    else
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int n;
    cin >> n;
    while(n--)
    {
        long long num;
        cin >> num;
        if(istprime(num))
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}
