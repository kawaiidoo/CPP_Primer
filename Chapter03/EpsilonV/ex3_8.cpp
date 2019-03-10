#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "Please input a sentence:";
	getline(cin, s);

	decltype(s.size()) i = 0; 
	while(i < s.size()) {
		s[i++] = 'X';
	}
	cout << "Your input sentence is " << s << endl;

	for(i = 0; i < s.size(); i++)
		s[i] = 'X';
	cout << "Your input sentence is " << s << endl;

	return 0;
}