#include <bits/stdc++.h>
using namespace std;
int numberOfdigit(long long number)
{
    int counter=0;
    while(number)
    {
        if(number%10==4||number%10==7)
        counter++;
        number/=10;
    }
    return counter;
}
bool islucky(int number)
{
    if(number==0) return false;
    while(number)
    {
        if(number%10==4||number%10==7)
        {
            number/=10;
        }
        else
        return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long number;
    cin >> number;
    if(islucky(numberOfdigit(number)))
    cout << "YES\n";
    else
    cout << "NO\n";
    return 0;
}