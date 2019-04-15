#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_item.h"

using namespace std;

bool compareIsbnLen(Sales_item &s1, Sales_item &s2)
{
	return s1.isbn().size() > s2.isbn().size();
}

int main()
{
	Sales_item d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
	std::vector<Sales_item> v{ d1, d2, d3, d4, d5 };

	sort(v.begin(), v.end(), compareIsbnLen);

	for (const auto &s : v)
		cout << s.isbn() << " ";
	cout << endl;

	return 0;
}