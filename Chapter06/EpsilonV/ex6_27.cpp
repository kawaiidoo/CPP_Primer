#include <iostream>

using namespace std;

int sum(initializer_list<int> ls)
{
	int sum = 0;
	for (auto i : ls)
		sum += i;

	return sum;
}

int main()
{
	int res = sum({1,2,3,4,5,6});
	cout << "acc({1,2,3,4,5,6}) result is " << res << endl;

	return 0;
}