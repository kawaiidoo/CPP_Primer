#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;

	cin >> s1 >> s2;

	if (s1.size() == s2.size()){
		cout << "The two strings have the same length" << endl;
	}else {
		cout << "The longer string is " << ((s1.size() > s2.size()) ? s1 : s2) << endl;
	}

	return 0;
}