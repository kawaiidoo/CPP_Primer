#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;

	cout << ivec.at(0);     //抛出out_of_range异常
	cout << ivec[0];        //段错误
	cout << ivec.front();   //段错误
	cout << *ivec.begin();  //段错误

	return 0;
}