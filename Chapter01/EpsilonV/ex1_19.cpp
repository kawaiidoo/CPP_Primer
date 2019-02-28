#include <iostream>

using namespace std;

void print_range(int lo, int hi) {
	int i;

	if (lo > hi) {
		print_range(hi, lo);
	}
	i = lo;
	while (i <= hi) {
		cout << i << " ";
		i++;
	}
}

int main() {
	int v1, v2;

   cout << "Please enter two number:" << endl;
   cin >> v1 >> v2;
   print_range(v1, v2);

   return 0;
}
