#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> vec = {"red", "hello", "fox", "red", "fix", "fox", "world", "test"};
	list<string> lst;

	sort(vec.begin(), vec.end());
	auto insert_it = back_inserter(lst);
	unique_copy(vec.begin(), vec.end(), insert_it);

	for (auto const& s: lst )
		cout << s << " ";
	cout << endl;

	return 0;
}