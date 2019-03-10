#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;

	cin >> s1 >> s2;

	if (s1 == s2){
		cout << "The two strings are equal." << endl;
	}else {
		cout << "The large string is " << ((s1 > s2) ? s1 : s2) << endl;
	}

	return 0;
}