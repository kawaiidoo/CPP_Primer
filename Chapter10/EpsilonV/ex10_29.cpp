#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iterator>

using namespace std;

int main()
{
	ifstream ifs("./letter.txt");
	istream_iterator<string> in(ifs), eof;
	vector<string> vec;

	copy(in, eof, back_inserter(vec));

	copy(vec.begin(), vec.end(), ostream_iterator<string>(cout, " "));

	return 0;
}