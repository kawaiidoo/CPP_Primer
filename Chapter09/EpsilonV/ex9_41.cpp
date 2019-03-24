#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<char> cvec = {'h', 'e', 'l'};
	string s(cvec.begin(), cvec.end());

	cout << s << endl;

	return 0;
}