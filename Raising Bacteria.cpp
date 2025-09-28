#include <bits/stdc++.h>
using namespace std;
#define en '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int result = __builtin_popcount(x); // عدد الـ1 في التمثيل الثنائي
    cout << result << en;

    return 0;
}
