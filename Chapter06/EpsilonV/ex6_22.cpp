#include <iostream>

using namespace std;

void swap(int*& pa, int*& pb)
{
	auto tmp = pa;
	pa = pb;
	pb = tmp;
}

int main()
{
	int a = 10, b = 100;
	auto pa = &a;
	auto pb = &b;
	swap(pa, pb);
	cout << *pa << " " << *pb << endl;

	return 0;
}