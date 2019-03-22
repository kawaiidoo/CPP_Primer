#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
	deque<string> ds;
	string word;
	while (cin >> word)
		ds.push_back(word);

	for(auto c : ds)
		cout << c << " ";
	cout << endl;
	return 0;
}