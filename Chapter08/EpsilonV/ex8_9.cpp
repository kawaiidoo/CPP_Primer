#include <iostream>
#include <sstream>

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
	istringstream iss("hello");
	readAndPrint(iss);

	return 0;
}