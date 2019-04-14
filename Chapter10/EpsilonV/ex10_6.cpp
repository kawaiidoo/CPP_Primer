#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;

	auto it = back_inserter(vec);
	fill_n(it, 10, 0);

	for(const auto &i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}