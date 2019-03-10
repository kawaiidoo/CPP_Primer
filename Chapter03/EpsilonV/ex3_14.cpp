#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	int i;
	decltype(v1.size()) index = 0;

	while(cin >> i)
		v1.push_back(i);

	for (index = 0; index < v1.size(); ++index)
	{
		cout << v1[index] << endl;
	}

	return 0;
}