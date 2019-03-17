#include <iostream>
#include <string>

using namespace std;

inline bool is_shorter(const string& lft, const string& rht)
{
	return lft.size() < rht.size();
}

int main()
{
	cout << is_shorter("Hello", "world!") << endl;

	return 0;
}