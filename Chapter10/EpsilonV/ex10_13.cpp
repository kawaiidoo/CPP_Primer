#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool bigger5(const string &s)
{
	return s.size() >= 5;
}

int main()
{
	vector<string> v = {"Test", "the", "partition", "function", "red", "world"};

	auto end_it = partition(v.begin(), v.end(), bigger5);

	for (auto it = v.begin(); it != end_it; ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}