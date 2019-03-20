#include <iostream>
#include <string>

using namespace std;

istream& readAndPrint(istream& is)
{
    string s;
    while(is >> s){
		cout << s << endl;
	}
    
    is.clear();
    
    return is;
} 

int main()
{
	readAndPrint(cin);

	return 0;
}