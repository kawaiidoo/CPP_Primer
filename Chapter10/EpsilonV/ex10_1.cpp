#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1 = {1,2,3,4,5,6,7,8,9,6,7};

	cout << "6 in v1 count " << count(v1.cbegin(), v1.cend(), 6) << endl;

	return 0; 
}