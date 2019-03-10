#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v1;
	string s;
	decltype(v1.size()) index = 0;

	while(cin >> s)
		v1.push_back(s);

	for (index = 0; index < v1.size(); ++index)
	{
		cout << v1[index] << endl;
	}

	return 0;
}