#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	list<string> ls;
	string word;
	while (cin >> word)
		ls.push_back(word);

	for(auto c : ls)
		cout << c << " ";
	cout << endl;
	return 0;
}