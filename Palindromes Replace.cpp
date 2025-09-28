#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.length();
    for (int i = size - 1, j = 0; i >= j; i--, j++)
    {
        if (s[i] == s[j] && s[i] != '?')
        {
            continue;
        }
        else if (s[i] == s[j] && s[i] == '?')
        {
            s[i] = 'a';
            s[j] = 'a';
        }
        else if (s[i] == '?' && s[j] != '?')
        {
            s[i] = s[j];
        }
        else if (s[j] == '?' && s[i] != '?')
        {
            s[j] = s[i];
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << s << endl;
    return 0;
}