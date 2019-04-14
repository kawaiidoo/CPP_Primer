#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<string> v1 = {"hello", "world", "is", "text", "an", "the", "world"};

	cout << "world in v1 count " << count(v1.cbegin(), v1.cend(), "world") << endl;

	return 0; 
}