#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    if(n%2==1)
    {
    long long result= -((n/2)+1);
    cout << result << endl;
    }
    else
    cout << n/2 << endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
                           another solution

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    if(n%2==1)
    {
        double num=n;
    long long result= -(ceil(num/2));
    cout << result << endl;
    }
    else
    cout << n/2 << endl;
    return 0;
}
*/