#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	int sum = accumulate(v1.cbegin(), v1.cend(), 0);
	cout << sum << endl;
}