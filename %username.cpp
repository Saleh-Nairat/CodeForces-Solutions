#include <bits/stdc++.h>
using namespace std;
#define en '\n';
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n,point,maximum,minimum,counter=0;
    cin >> n;
    cin >> point;
    maximum=point,minimum=point;
    for(int i=1;i<n;i++)
    {
        cin >> point ;
        if(point > maximum)
        {
        counter++;
        maximum=point;
        }
        if(point < minimum)
        {
            counter++;
            minimum=point;
        }
    }
    cout << counter << endl;
    return 0;
}
