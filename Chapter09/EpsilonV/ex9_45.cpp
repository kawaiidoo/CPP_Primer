#include <iostream>
#include <string>

using namespace std;

string add_pre_and_suffix(string &s, string const& pre, string const& suffix)
{
	s.insert(s.begin(), pre.begin(), pre.end());
	return s.append(suffix);
}

int main()
{
	string name("wnag");
	cout << add_pre_and_suffix(name, "Mr.", ", Jr") << endl;
	return 0;
}