#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	vector<string> text;
	string line;

	while (getline(cin, line))
		text.push_back(line);

	for (auto& word : text)
	{
		for (auto& ch : word)
			if (isalpha(ch)) ch = toupper(ch);
		cout << word << " ";
	}

	return 0;
}