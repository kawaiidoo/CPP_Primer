#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	int i;

	while (cin >> i)
		ivec.push_back(i);

	auto size = (ivec.size() + 1) / 2;

	for(int i = 0; i != size; i++)
		cout << ivec[i] + ivec[ivec.size() - i -1] << " ";
	cout << endl;

	return 0;
}