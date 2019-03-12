#include <iostream>
#include "../include/Sales_item.h"

using namespace std;

int main() {

	Sales_item total;
	if (cin >> total) {

		Sales_item trans;
		while (cin >> trans) {
			if (trans.isbn() == total.isbn())
				total += trans;
			else
            {
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	return 0;
}