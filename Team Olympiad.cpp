#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N;
	vector<int> one; vector<int> two; vector<int> three;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		switch (t)
		{
		case 1:one.push_back(i+1); break;
		case 2:two.push_back(i+1); break;
		case 3:three.push_back(i+1);
		}
	}
	int sizeone, sizetwo, sizethree;
	sizeone = one.size();
	sizetwo = two.size();
	sizethree = three.size();
	int w = min(sizeone, min(sizetwo, sizethree));
	cout << w << endl;
	for (int i = 0; i < w; i++)
	{
		cout << one[i] << " " << two[i] << " " << three[i] << endl;
	}
return 0;
}