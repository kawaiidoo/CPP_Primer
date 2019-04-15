#include <iostream>
#include <vector>
#include <list>

using namespace std;

void printList(const list<int> &v)
{
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

int main()
{
	vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> lst2, lst3, lst4;

	cout << "using back_inserter:";
	copy(v1.cbegin(), v1.cend(), back_inserter(lst2));
	printList(lst2);

	cout << "using front_inserter:";
	copy(v1.cbegin(), v1.cend(), front_inserter(lst3));
	printList(lst3);

	cout << "using inserter:";
	copy(v1.cbegin(), v1.cend(), inserter(lst4, lst4.begin()));
	printList(lst4);

	return 0;
}