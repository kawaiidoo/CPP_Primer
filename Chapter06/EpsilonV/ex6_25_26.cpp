#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	for (int i = 0; i < argc; ++i)
		str += string(argv[i]) + " ";

	cout << str << endl;
	return 0;
}