#include <vector>
#include <iostream>
#include <string>

using namespace std;

size_t biggerThan6(vector<string> const& v)
{
	return count_if(v.cbegin(), v.cend(), [](string const& s){return s.size() > 6;});
}

int main()
{
	vector<string> v{ "1234", "123456", "1234567", "1234567", "1234567", "1234567" };
	std::cout << biggerThan6(v) << endl;

	return 0;
}