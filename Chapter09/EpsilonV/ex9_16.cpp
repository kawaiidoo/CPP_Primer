#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> l1{1,2,3,4,5};
	vector<int> v1{1,2,3,4,5};
	vector<int> v2{1,2,3,4};

	cout << "l1 == v1 " << ((vector<int>(l1.cbegin(), l1.cend())) == v1 ? "true" : "false") << endl;
	cout << "l1 == v2 " << ((vector<int>(l1.cbegin(), l1.cend())) == v2 ? "true" : "false") << endl;

	return 0;
}