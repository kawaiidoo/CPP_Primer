#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int sum = 0;
	for (int i = 0; i < 10; ++i)
	{
		sum += i;
	}

	cout << "sum of 1 to 10 inclusive is " << sum << endl;

	return 0; 
}
