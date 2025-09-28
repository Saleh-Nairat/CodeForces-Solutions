#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,m,suma=0,sumb=0;
    cin >> n >>  m;
    vector<int> a(n);
    for(int i=0;i<n;i++){ 
    cin >> a[i];
    suma+=a[i];}
    vector<int>b(m);
    for(int i=0;i<m;i++) {
    cin >> b[i];
    sumb+=b[i];}
    if(suma==sumb)
    cout << "Yes";
    else
    cout << "No";
    return 0;
}