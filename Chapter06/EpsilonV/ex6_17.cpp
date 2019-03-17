#include <iostream>
#include <string>

using namespace std;

bool any_capital(const string& s)
{
	for( auto c : s)
	{
		if (isupper(c))
			return true;
	}

	return false;
}

void to_lowercase(string& s)
{
	for( auto& c : s)
	{
		c = tolower(c);
	}
}

int main()
{
    string hello("Hello World!");
    cout << any_capital(hello) << endl;

    to_lowercase(hello);
    cout << hello << endl;

    return 0;
}