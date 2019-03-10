#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	int i, sum;

	while (cin >> i)
		ivec.push_back(i);

	decltype(ivec.size()) index = 0;

	sum = 0;
	for (index = 0; index < ivec.size(); ++index)
	{
		sum += ivec[index];
		if ((index+1) % 2 == 0)
		{
			cout << sum << endl;
			sum = 0;
		}
	}

	if (ivec.size() % 2 != 0)
		cout << ivec[ivec.size() - 1];

	return 0;
}