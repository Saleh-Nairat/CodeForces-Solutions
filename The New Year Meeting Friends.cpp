#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector <int>p;
	int x1,x2,x3,dis;
	cin >> x1 >> x2 >> x3 ;
	p.push_back(x1);
	p.push_back(x2);
	p.push_back(x3);
	sort(p.begin(),p.end());
	dis=(abs(p[1]-p[2]))+(abs(p[1]-p[0]));
	cout << dis << endl;
	return 0;
}