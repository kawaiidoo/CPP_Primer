#include <iostream>
#include "../include/Sales_item.h"

using namespace std;

int main() {
	Sales_item currItem, valItem;
	int cnt = 1;

	if (cin >> currItem) {

		while (cin >> valItem) {
			if (valItem.isbn() == currItem.isbn())
				cnt++;
			else{
				cout << currItem << " occurs " << cnt << " times " << endl;
				currItem = valItem;
				cnt = 1;
			}
		}

		cout << currItem << " occurs " << cnt << " times " << endl;
	}

	return 0;
}