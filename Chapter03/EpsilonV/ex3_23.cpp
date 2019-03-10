#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto begin = ivec.begin();
	auto end = ivec.end();

	for (; begin != end; ++begin)
	{
		*begin = (*begin)*2;
	}

	for(begin = ivec.begin(); begin != end; ++begin )
		cout << * begin << "  ";
	cout << endl;

	return 0;
}