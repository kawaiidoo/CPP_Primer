#include <vector>
#include <iostream>
#include <string>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

size_t biggerThan6(vector<string> const& v)
{
	auto check6 = bind(check_size, _1, 6);
	return count_if(v.cbegin(), v.cend(), check6);
}

int main()
{
	vector<string> v{ "1234", "123456", "1234567", "1234567", "1234567", "1234567" };
	std::cout << biggerThan6(v) << endl;

	return 0;
}