#include <vector>
#include <iostream>
#include <string>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return sz > s.size();
}

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7 };
	string s("12345");

	auto it = find_if(v.begin(), v.end(), bind(check_size, s, _1));

	if (it != v.end())
		cout << *it << endl;

	return 0;
}