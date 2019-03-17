#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &ivec)
{
#ifndef NDEBUG
	cout << "vector size: " << ivec.size() << endl;
#endif
	if (!ivec.empty())
	{
		auto tmp = ivec.back();
		ivec.pop_back();
		print(ivec);
		cout << tmp << " ";
	}
}

int main()
{
	vector<int> ivec{1,2,3,4,5,6,7,8,9};
	print(ivec);
	cout << endl;

	return 0;
}