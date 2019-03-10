#include <iostream>

using namespace std;

int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	auto beg = begin(arr);
	auto last = end(arr);

	for (; beg != last; ++beg)
		*beg = 0;

	for(auto c : arr)
		cout << c << "  ";
	cout << endl;

	return 0;
}