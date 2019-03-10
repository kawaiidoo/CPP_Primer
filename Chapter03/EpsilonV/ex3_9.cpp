#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, s1;
	cout << "Please input a sentence with punctuation:";
	getline(cin, s);

	decltype(s.size()) i = 0;
	for(i = 0; i < s.size() && !ispunct(s[i]); i++ )
		s1 += s[i];

	cout << "The sentence is " << s1 << endl;

	return 0; 
}