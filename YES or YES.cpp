#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s=="yes"||s=="YES"||s=="Yes"||s=="yES"||s=="yEs"||s=="YeS"||s=="yeS"||s=="YEs")
        cout << "yes\n";
        else
        cout << "NO\n";
    }
    return 0;
}

/*
                        another solution

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if((s[0]=='y'||s[0]=='Y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='s'||s[2]=='S'))
        cout << "yes\n";
        else
        cout << "NO\n";
    }
    return 0;
}

*/