#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, line;

	while(cin >> word)
	{
		line += word;
	}

	cout << "The concatenated string is " << line;

	return 0;
}