#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> nums;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		pair<int, int> p(a, b);
		nums.push_back(p);
		if ((nums.at(i).first) != (nums.at(i).second))
		{
			cout << "rated\n";
			return 0;
		}
	}
	vector<pair<int, int>> temp = nums;
	sort(nums.begin(), nums.end(), greater<pair<int, int>>());
	if (temp == nums)
		cout << "maybe\n";
	else
		cout << "unrated\n";
	return 0;
}