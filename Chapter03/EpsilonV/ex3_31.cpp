#include <iostream>

using namespace std;

int main()
{
	int ar[10];
	for (int i = 0; i < 10; ++i)
	{
		ar[i] = i;
	}

	for(auto c : ar)
		cout << c << "  ";
	cout << endl;

	return 0;
}