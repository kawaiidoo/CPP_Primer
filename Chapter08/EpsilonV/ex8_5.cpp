#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void ReadFileToVec(const string &fileName, vector<string> &vec)
{
	ifstream ifs(fileName);

	if (ifs)
	{
		string buf;
		while(ifs >> buf)
		{
			vec.push_back(buf);
		}
	}
}

int main()
{
	vector<string> vec;
	ReadFileToVec("./test.txt", vec);

	for(const auto &s : vec)
		cout << s << endl;
	return 0;
}