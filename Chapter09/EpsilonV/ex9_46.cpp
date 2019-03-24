#include <iostream>
#include <string>

using namespace std;

string add_pre_and_suffix(string &s, string const& pre, string const& suffix)
{
	s.insert(0, pre);
	return s.insert(s.size(), suffix);
}

int main()
{
	string name("wnag");
	cout << add_pre_and_suffix(name, "Mr.", ", Jr") << endl;
	return 0;
}