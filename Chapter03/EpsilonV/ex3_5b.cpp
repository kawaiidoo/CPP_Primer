#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, line;

	while(cin >> word)
	{
		line += (line.empty() ? "" : " ") + word;
	}

	cout << "The concatenated string is " << line;

	return 0;
}