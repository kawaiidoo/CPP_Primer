#include <iostream>

using namespace std;

int max_int(const int a, const int *const b)
{
	return a > (*b) ? a : (*b);
}

int main()
{
	int a = 10, b = 100;
	cout << "a is " << a << " and b is " << b << endl;
	int res = max_int(a, &b);
	cout << "max_int(a, &b) result is " << res << endl;

	return 0;
}