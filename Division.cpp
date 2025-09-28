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
    {
        int rating;
        cin >> rating;
        if(rating>=1900)
        cout <<"Division " <<  1 << endl;
        else if(rating>=1600&&rating<=1899)
        cout << "Division " << 2 <<  endl;
        else if(rating>=1400&&rating<=1599)
        cout << "Division " <<3 << endl;
        else
        cout << "Division " <<4 << endl;
    }
    return 0;
}
