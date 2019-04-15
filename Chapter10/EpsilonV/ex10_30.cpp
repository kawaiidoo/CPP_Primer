#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	istream_iterator<int> int_it(cin), eof;
	vector<int> vec;
	
	copy(int_it, eof, back_inserter(vec));
	sort(vec.begin(), vec.end());

	for (auto &i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}