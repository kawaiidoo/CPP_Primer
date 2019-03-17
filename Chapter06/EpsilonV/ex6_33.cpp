#include <iostream>
#include <vector>

using namespace std;

using Iter = vector<int>::const_iterator;

void print(Iter beg, Iter end)
{
	if (beg != end)
	{
		cout << *beg << " ";
		print(++beg, end);
	}
}

int main()
{
	vector<int> ivec{1,2,3,4,5,6,7};
	print(ivec.cbegin(), ivec.cend());

	return 0;
}