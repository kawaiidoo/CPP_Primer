#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
	list<int> ilst(5, 1);
	vector<int> ivec(5, 2);

	vector<double> dvec(ilst.begin(), ilst.end());
	for (auto i : ilst)
		cout << i << " ";
	cout << endl;
	for (auto i : dvec)
		cout << i << " ";
	cout << endl;

	vector<double> dvec1(ivec.begin(), ivec.end());
    for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	for (auto i : dvec1)
		cout << i << " ";
	cout << endl;

	return 0;
}