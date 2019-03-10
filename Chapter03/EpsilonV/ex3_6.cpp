#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "Please Input a sentence :";
	getline(cin, s);

	for(auto &c: s){
		c = 'X';
	}

	cout << "Your input sentence is " << s << endl;

	return 0;
}