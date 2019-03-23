#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> ivec(begin(ia), end(ia));
	list<int> ilst(begin(ia), end(ia));

	auto it = ilst.begin();
	while (it != ilst.end())
		if (*it % 2)
			it = ilst.erase(it);
		else
			++it;

	for (auto i : ilst)
		cout << i << " ";
	cout << endl;

	auto iv = ivec.begin();
	while (iv != ivec.end())
		if (*iv % 2 == 0)
			iv = ivec.erase(iv);
		else
			++iv;

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;

	return 0;
}