#include <iostream>
#include <string>

using namespace std;

void replaceNewWord(string &s, string const &oldVal, string const &newVal)
{
	for (size_t pos = 0; pos <= s.size() - oldVal.size();)
	{
		if (oldVal == string(s, pos, oldVal.size()) )
		{
			s.replace(pos, oldVal.size(), newVal);
			pos += newVal.size();
		}else
		    ++pos;
	}
}


int main()
{
    string s{ "To drive straight thru is a foolish, tho courageous act." };
    replaceNewWord(s, "tho", "though");
    cout << s << endl;
    replaceNewWord(s, "thru", "through");
    cout << s << endl;

    return 0;
}