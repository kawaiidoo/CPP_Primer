#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main()
{
	list<int> lint{1,2,3,4,5,6,7,8,9};
	deque<int> oddDeque;
	deque<int> evenDeque;

	for (auto &i : lint)
	{
		if (i % 2 == 0)
			evenDeque.push_back(i);
		else
			oddDeque.push_back(i);
	}

	for (auto i : oddDeque)
		cout << i << " ";
	cout << endl;

	for (auto i : evenDeque)
		cout << i << " ";
	cout << endl;

	return 0;
}