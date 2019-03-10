#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s1("Hello"), s2("World");
	if (s1 == s2)
		cout << "same string." << endl;
	else if (s1 > s2)
		cout << "Hello > World" << endl;
	else
		cout << "World > Hello" << endl;

	const char cs1[] = "Hello";
	const char cs2[] = "World";
	auto res = strcmp(cs1, cs2);
	if (res == 0)
		cout << "same string." << endl;
	else if (res > 0)
		cout << "Hello > World" << endl;
	else
		cout << "World > Hello" << endl;

	return 0;
}